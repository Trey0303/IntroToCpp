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
	//go through array grabbing and setting a value to compare
	//reset count to zero
	for (int i = 0; i < size; i++)
	{
		int value = numbers[i];
		int count = 0;
		//go through array comparing each number to value
		for (int i2 = 0; i2 < size; i2++)
		{
			
			if (numbers[i2] == value)
			{
				count++;
				if (count > 1)
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

int reverse(int numbers[], size_t size, int start, int end)
{
	
	while (start < end) 
	{
		int temp = numbers[start];
		numbers[start] = numbers[end];
		numbers[end] = temp;
		start++;
		std::cout << *numbers;
	}
			

		//for (int i = 0; i < size; i++)
		//{
		//	int value = numbers[i];
		//	//go through array comparing each number to value
		//	for (int i2 = 0; i2 < size; i2++)
		//	{

		//		if (numbers[i2] > value)
		//		{
		//			int temp = numbers[i];
		//			numbers[i2] = value;
		//			numbers[] = temp;
		//			start++;
		//			std::cout << *numbers;

		//		}
		//	}
		//}
	return 0;
}