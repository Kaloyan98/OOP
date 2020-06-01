#include "Image.h"

Image::Image(){}

Image::Image(char* a, char* b, int c, char* d, char* e)
{
	set_name(a);
	set_date(b);
	set_size(c);
	set_type(d);
	device_name = e;
}

void Image::set_device_name(char* a)
{
	device_name = a;
}

char* Image::get_device_name() const
{
	return device_name;
}

