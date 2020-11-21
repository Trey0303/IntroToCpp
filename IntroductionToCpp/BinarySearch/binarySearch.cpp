#include <iostream>
#include <cstdlib>
#include "binarySearch.h"

int binary_search(int array[], int start_index, int end_index, int key)
{
	while (start_index <= end_index)
	{
		int pivot = (start_index + end_index) / 2;
		if (array[pivot] == key)
		{
			return pivot;
		}
		if (key < array[pivot])
		{
			end_index = pivot - 1;
		}
		else
		{
			start_index = pivot + 1;
		}
	}
	return -1;
}

void print_array(int a[], int n, int start, int end, int pivot)
{
	for (int i = 0; i != n; ++i)
	{
		if (i == start)
			std::cout << "[";
		else if (i == pivot)
			std::cout << "<";

		if (i<start || i>end)
			std::cout << (a[i] < 10 ? "." : "..");
		else
			std::cout << a[i];
		if (i + 1 != pivot)
			std::cout << (i == end ? "]" : (i + 1 != start ? (i != pivot ? " " : ">") : ""));
	}
	std::cout << std::endl;
}
