#pragma once
#include<iostream>
#include<cstring>

using namespace std;

class MyString
{
	char* string;
public:
	MyString();
	MyString(const char* string);
	MyString(const MyString& string);
	size_t length() const;
	const char* data() const;
	MyString& operator=(const char* str);
	MyString& operator=(const MyString& string);
	bool operator<(const MyString& string) const;
	bool operator==(const MyString& string) const;
	bool operator!=(const MyString& string) const;
	MyString operator+(const MyString& string);

	virtual ~MyString();

	friend ostream& operator<<(ostream& os, const MyString& string);
	friend istream& operator >> (istream& is, MyString& string);


};
