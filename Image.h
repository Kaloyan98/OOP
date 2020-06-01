#pragma once
#include "File.h"

class Image : public File
{
private:
	char* device_name;
public:
	Image();
	~Image();
	Image(char*, char*, int, char*, char*);

	char* get_device_name() const;
	void set_device_name(char*);
};