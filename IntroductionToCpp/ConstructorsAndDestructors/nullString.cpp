#include <cstdlib>
#include <iostream>
#include "nullString.h"

size_t stringLength(const char* string)
{
	size_t length = 0;
	for (size_t i = 0; string[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

nulString::nulString()
{
	dataLength = 1;
	data = new char[dataLength];
	data[0] = '\0';
}

nulString::nulString(const char *initialText)
{
	size_t length = stringLength(initialText);

	dataLength = length + 1;
	data = new char[dataLength];

	for (size_t i = 0; i < length; i++)
	{
		data[i] = initialText[i];
	}
	data[dataLength - 1] = '\0';
}

nulString::~nulString()
{
	delete[] data;
}

const char* nulString::getString()
{
	return data;
}

void nulString::set(const char *newText)
{
	size_t length = stringLength(newText);

	if (length + 1 > dataLength)
	{
		delete[] data;

		dataLength = length + 1;
		data = new char[dataLength];

	}

	for (size_t i = 0; i < length; i++)
	{
		data[i] = newText[i];
	}
	data[length] = '\0';
}

void nulString::append(const char* toAppend)
{
	size_t curLength = stringLength(data);
	size_t addLength = stringLength(toAppend);

	size_t finalLength = curLength + addLength;

	if (finalLength + 1 > dataLength) 
	{
		char* newData = new char[finalLength + 1];

		for(size_t i = 0; i < curLength; i++)
		{
			newData[i] = data[i];
		}

		delete[] data;

		data = newData;
		dataLength = finalLength + 1;
	}

	for (size_t i = 0; i < addLength; i++)
	{
		data[i + curLength] = toAppend[i];
	}
	data[finalLength] = '\0';
}

void nulString::trim(size_t numToTrim)
{
	size_t curLength = stringLength(data);
	size_t insertIdx = curLength - numToTrim;
	if (numToTrim > curLength)
	{
		insertIdx = 0;
	}

	data[insertIdx] = '\0';
}

//DeepVsShallow
nulString::nulString(const nulString& other)
{
	size_t length = stringLength(other.data);

	dataLength = length + 1;
	data = new char[dataLength];

	for (size_t i = 0; i < length; i++)
	{
		data[i] = other.data[i];
	}
	
	
}

nulString& nulString::operator=(const nulString& other)
{
	*data = *other.data;
	return *this;
}
