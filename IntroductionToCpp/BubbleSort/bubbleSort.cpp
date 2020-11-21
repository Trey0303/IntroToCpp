#include <iostream>
#include <cstdlib>
#include "bubbleSort.h"

void BubbleSort(int array[], int n)
{

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