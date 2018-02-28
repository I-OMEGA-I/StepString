#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <iostream>
using namespace std;

String::String()
{
}

String::String(char* _source)
{
	_str = new char[strlen(_source) + 1];
	strcpy(_str, _source);
}
String::String(const char* _source)
{
	_str = new char[strlen(_source) + 1];
	strcpy(_str, _source);
}

int String::GetLength()
{
	int index = 0;
	char i = _str[0];
	while (i != '\0') {
		i = _str[index];
		index++;
	}
	return index - 1;
}
int String::GetLength(char* string)
{
	int index = 0;
	char i = string[0];
	while (i != '\0') {
		i = string[index];
		index++;
	}
	return index - 1;

}

int String::GetLength(const char* string)
{
	int index = 0;
	char i = string[0];
	while (i != '\0') {
		i = string[index];
		index++;
	}
	return index - 1;

}

char * String::ToLower()
{
	char* tmpString = new char[GetLength() + 1];
	strcpy(tmpString, _str);
	for (size_t i = 0; i < GetLength(); i++)
	{
		if ((int)tmpString[i] >= 65 && (int)tmpString[i] <= 90) {
			tmpString[i] += 32;
		}
	}
	return tmpString;
}

char * String::ToUpper()
{
	char* tmpString = new char[GetLength() + 1];
	strcpy(tmpString, _str);
	char i;
	for (size_t i = 0; i < GetLength(); i++)
	{
		if ((int)tmpString[i] >= 97 && (int)tmpString[i] <= 122) {
			tmpString[i] -= 32;
		}
	}
	return tmpString;
}

bool String::subString(char* substring)
{
	int index = 0;
	int counter = 0;
	bool t = false;
	for (size_t i = 0; i < GetLength(); i++)
	{
		if (index == GetLength(substring))
		{
			return true;
		}


		if (_str[i] == substring[index]) {
			t = true;
			index++;

		}
		else {
			t = false;
			index = 0;
		}



	}

	return false;
}
bool String::subString(const char* substring)
{
	int index = 0;
	int counter = 0;
	bool t = false;
	for (size_t i = 0; i < GetLength(); i++)
	{
		if (index == GetLength(substring))
		{
			return true;
		}


		if (_str[i] == substring[index]) {
			t = true;
			index++;

		}
		else {
			t = false;
			index = 0;
		}



	}

	return false;
}



String::~String()
{
}
