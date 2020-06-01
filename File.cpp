#include "File.h"

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

