#include<stdexcept>
#include <sstream>

#include "DataFileStringValue.h"

DataFileStringValue::DataFileStringValue()
{
	this->value = new char[1];
	this->value[0] = '\0';
}

DataFileStringValue::DataFileStringValue(const char* val)
{
	this->value = new char[strlen(val) + 1];
	strcpy(this->value, val);
}

DataFileStringValue::~DataFileStringValue()
{
	delete this->value;
}

const char* DataFileStringValue::get_value() const
{
	return this->value;
}

std::ostream& operator<<(std::ostream& os, DataFileStringValue const& me)
{
	return os << me.formatToString();
}

std::string DataFileStringValue::formatToString() const
{
	std::ostringstream stringStream;

	if (this->get_value() != NULL) {
		stringStream << "\"";
		stringStream << std::string(this->get_value());
		stringStream << "\"";
	}

	return stringStream.str();
}