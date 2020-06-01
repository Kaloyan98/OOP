#pragma once
#include <string>
#include "DataFile.h"
using namespace std;

class File : public DataFile
{
	class FileEntry
	{
	public:
		FileEntry();
		FileEntry(const FileEntry& from);

		~FileEntry();

		void set_key(const char* key);
		void set_value(DataFile* value);

		const char* get_key() const;
		DataFile* get_value() const;

		FileEntry& operator=(const FileEntry& from);

	private:
		char* key;
		DataFile* value;
	};

private:
	char* name;
	char* date;
	int size;
	char* type;
public:
	File();
	File(char*, char*, int, char*);
	~File();

	char* get_name() const;
	char* get_date() const;
	int get_size() const;
	char* get_type() const;

	void set_name(char*);
	void set_date(char*);
	void set_size(int);
	void set_type(char*);

	virtual std::string formatToString() const;

	friend std::ostream& operator<<(std::ostream& os, File const& me);
};
