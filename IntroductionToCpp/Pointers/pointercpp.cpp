#include <cstdlib>
#include <iostream>
#include "pointerh.h"

void printFloats(float* arr, size_t size)
{
	
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}

}

int arraySum(int* arr, size_t size)
{
	int total = 0;
	for (size_t i = 0; i < size; i++)
	{
		total += arr[i];
		
	}
	std::cout << std::endl << total << std::endl;
	return total;
}

void initBools(bool* arr, size_t size, bool defaultValue) 
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = defaultValue;
		std::cout << arr[i];
	}
}

int* zeroArray(size_t size)
{
	int* zeroarray = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		zeroarray[i] = 0;
	}

	return zeroarray;
}