#pragma once
#include <string>
using namespace std;

class File
{
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

};
