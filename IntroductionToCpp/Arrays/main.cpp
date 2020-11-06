#include <cstdlib>
#include <iostream>
#include "arrayh.h"



int main() 
{
	//create array
	//index       0,1,2,3,4,5,6,7,8,9
	//array size: 1,2,3,4,5,6,7,8,9,10
	int array[10]{10,1,25,3,33,5,26,7,8,9};

	//get size of array
	int size = 0;
	for (int i : array) 
	{
		size++;
	}

	//add first 5 numbers in array
	int result = sum(array, 5);

	//print full array
	printNumbers(array, size);

	//print sum of array
	int sum = sumNumbers(array, size);
	std::cout << std::endl << sum;

	//print largest num in array
	int largestNumFinal = largestValue(array, size);
	std::cout << std::endl << largestNumFinal;

	//find value in array, return index of value
	int returnValue = findIndex(array, size, 6, 2);
	std::cout << std::endl << returnValue;

	return 0;
}