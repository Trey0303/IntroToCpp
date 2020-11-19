#include <cstdlib>
#include <iostream>
#include "nullString.h"

nulString::nulString()
{
	dataLength = 10;
	data = new char[dataLength];
	data[0] = '\0';
}

nulString::nulString(const char *initialText)
{
	size_t length = 0;
	for (size_t i = 0; initialText[i] != '\0'; i++)
	{
		length++;
	}

	dataLength = length;
	data = new char[dataLength];

	for (size_t i = 0; i < length; i++)
	{
		data[i] = initialText[i];
	}
}

nulString::~nulString()
{
	delete[] data;
}

const char* nulString::getString()
{
	return data;
}