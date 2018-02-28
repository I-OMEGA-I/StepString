#pragma once

// ToLower
// ToUpper
// Substring
// Delete Character
// Delete String
// Contains
// Split

class String
{
private:
	char* _str;
public:
	String();
	String(char* _source);
	String(const char* _source);
	int GetLength();
	int GetLength(char * string);
	int GetLength(const char* string);
	char* ToLower();
	char* ToUpper();

	bool subString(char * subsring);
	bool subString(const char* substring);



	~String();
};

