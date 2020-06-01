#include "Music.h"

Music::Music() {};

Music::Music(char* a, char* b, int c, char* d, char* e, char* f, int g)
{
	char* name_of_file;
	name_of_file = strcat(get_singer_name(), " - ");
	name_of_file = strcat(name_of_file, get_song_name());
	set_name(name_of_file);
	set_date(b);
	set_size(c);
	set_type(d);
	singer_name = e;
	song_name = f;
	year = g;
}

void Music::set_singer_name(char* a)
{
	singer_name = a;
}
void Music::set_song_name(char* b)
{
	song_name = b;
}
void Music::set_year(int c)
{
	year = c;
}

char* Music::get_singer_name() const
{
	return singer_name;
}
char* Music::get_song_name() const
{
	return song_name;
}
int Music::get_year() const
{
	return year;
}