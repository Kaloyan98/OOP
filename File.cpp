#include "File.h"
#include<stdexcept>
#include <sstream>
#include <unordered_map>
#include "DataFile.h"

File::File(){}

File::File(char* a, char* b, int c, char* d)
{
	name = a;
	date = b;
	size = c;
	type = d;
}

char* File::get_name() const {
	return name;
}
char* File::get_date() const {
	return date;
}
int File::get_size() const {
	return size;
}
char* File::get_type() const {
	return type;
}

void File::set_name(char* a)
{
	name = a;
}
void File::set_date(char* b)
{
	date = b;
}
void File::set_size(int c)
{
	size = c;
}
void File::set_type(char* d)
{
	type = d;
}

File::FileEntry::FileEntry()
{
	this->key = new char[1];
	this->key[0] = '\0';
	this->value = NULL;
}

File::FileEntry::FileEntry(const FileEntry& from)
{
	this->key = new char[strlen(from.key) + 1];
	strcpy(this->key, from.key);
	this->value = from.value;
}

File::FileEntry& File::FileEntry::operator=(const FileEntry& from)
{
	if (this != &from)
	{
		this->set_key(from.key);
		this->set_value(from.value);
	}

	return *this;
}

File::FileEntry::~FileEntry()
{
	if (this->key != NULL) {
		delete[] this->key;
	}

	if (this->value != NULL) {
		delete this->value;
	}
}

void File::FileEntry::set_key(const char* key)
{
	// Delete the previous key
	if (this->key != NULL) {
		delete[] this->key;
	}

	this->key = new char[strlen(key) + 1];
	strcpy(this->key, key);
	this->key[strlen(key)] = '\0';
}

void File::FileEntry::set_value(DataFile* value)
{
	// Delete the previous value
	if (this->value != NULL) {
		delete this->value;
	}

	this->value = value;
}

const char* File::FileEntry::get_key() const
{
	return this->key;
}

DataFile* File::FileEntry::get_value() const
{
	return this->value;
}
string File::formatToString() const
{
	std::ostringstream stringStream;

	stringStream << "{ ";

	if (this->get_size() > 0) {
		for (int i = 0; i < this->get_size(); i++)
		{
			DataFile* fileValue = this->get_value();

			if (fileValue != NULL) {
				if (i > 0) {
					stringStream << ", ";
				}

				stringStream << "\"";
				stringStream << this->get_key();
				stringStream << "\" : ";
				stringStream << (*fileValue);
			}
		}
	}

	stringStream << " }";

	return stringStream.str();
}
std::ostream& operator<<(std::ostream& os, File const& me)
{
	return os << me.formatToString();
}

unordered_map<string, string> umap;