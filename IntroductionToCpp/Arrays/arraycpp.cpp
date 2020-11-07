#include <cstdlib>
#include <iostream>
#include "arrayh.h"

int sum(int nums[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += nums[i];
	}
	return total;
}

int sumNumbers(int numbers[], size_t size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += numbers[i];
	}
	return total;
}

void printNumbers(int numbers[], size_t size) 
{
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i];
	}
}

int largestValue(int numbers[], size_t size) 
{
	int largestNum = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > largestNum) 
		{
			largestNum = numbers[i];
		}
	}
	return largestNum;
}

int findIndex(int numbers[], size_t size, int value, int start) 
{
	int returnValue = 0;
	for (int i = start; i < size; i++)
	{
		if (numbers[i] == value)
		{
			//returnValue = i;
			return i;
		}
	}
	return returnValue = -1;
	//return returnValue;
}

int countElement(int numbers[], size_t size, int value, int start)
{
	int count = 0;
	for (int i = start; i < size; i++)
	{
		if (numbers[i] == value)
		{
			count++;
		}
	}
	return count;
}

int ArrayUniqueness(int numbers[], size_t size)
{
	std::cout << std::endl;
	int arrayb[10];
	//get size of array
	int sizeb = 0;
	for (int i : arrayb)
	{
		sizeb++;
	}
	for (size_t i = 0; i < sizeb; i++)
	{
		arrayb[i] = numbers[i];
		std::cout <<  arrayb[i] << ", ";
	}
	
	for (int i = 0; i < size; i++)
	{
		for (int i2 = 0; i2 < sizeb; i2++)
		{
			int count = 0;
			if (numbers[i] == numbers[i2])
			{
				count++;
				if (count >= 2)
				{
					std::cout << std::endl << "No";
					return 0;
				}
				
			}
		}
	}
	std::cout << std::endl << "Yes";
	return 0;
}