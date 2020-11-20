#pragma once

#include <cstdlib>

class nulString
{
private:
	char* data;

	size_t dataLength;

public:
	nulString();

	nulString(const char* initialText);

	//DeepVsShallow
	nulString(const nulString& other);

	~nulString();

	//DeepVsShallow
	nulString& operator=(const nulString& other);

	const char* getString();

	void set(const char* newText);

	void append(const char* toAppend);

	void trim(size_t numToTrim);
};