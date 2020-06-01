#pragma once

#include "DataFile.h"

#include <sstream>

using namespace std;

/*
* This is a JSON string value in the JSON Object
*/
class DataFileStringValue : public DataFile {
public:
	DataFileStringValue();
	DataFileStringValue(const char* val);

	~DataFileStringValue();

	const char* get_value() const;

	std::string formatToString() const;

	friend std::ostream& operator<<(std::ostream& os, DataFileStringValue const& me);
private:
	char* value;
};
