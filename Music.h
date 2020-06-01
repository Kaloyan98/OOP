#pragma once

#include "File.h"

class Music : public File
{
private:
	char* singer_name;
	char* song_name;
	int year;

public:
	Music();
	Music(char*, char*, int, char*, char*, char*, int);

	void set_singer_name(char*);
	void set_song_name(char*);
	void set_year(int);

	char* get_singer_name() const;
	char* get_song_name() const;
	int get_year() const;

	friend std::ostream& operator<<(std::ostream& os, Music const& me);
};
