#include <cstdlib>
#include <iostream>
#include "arrayh.h"



int main() 
{
	//create array
	//index       0 ,1,2 ,3,4 ,5, 6,7,8,9
	//array size: 1 ,2,3 ,4,5 ,6, 7,8,9,10
	int array[10]{10,1,25,4,33,4,26,7,6,9};

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
	//                          array[],size,value,start
	int returnValue = findIndex(array, size, 6, 2);
	std::cout << std::endl << returnValue;

	//count number of times value is found in array from starting point
	//                       array[],size,value,start
	int count = countElement(array, size, 4, 2);
	std::cout << std::endl << count;

	//if array has two or more of the same number say no to being unique, else yes
	ArrayUniqueness(array, size);

	//Reverse
	reverse(array, size, 1, 10);
	

	return 0;
}