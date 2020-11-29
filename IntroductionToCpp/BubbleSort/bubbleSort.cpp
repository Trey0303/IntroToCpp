#include <iostream>
#include <cstdlib>
#include "bubbleSort.h"

void BubbleSort(int array[], int n)
{
	//Bail for single element or invalid indices
	if (n < 2)
	{
		return;
	}

	//Track if list is sorted
	bool sorted = false; //set to false to ensure the while loop starts up
	while (!sorted)
	{
		sorted = true;
		for (int i = 0; i < n - 1; ++i)
		{			if (array[i] < array[i + 1])
			{
				swap(array[i], array[i + 1]);
				sorted = false;
			}
		}

	}

}

void print_array(int array[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << array[i] << ",\t";
		if (i % 10 == 9) std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}