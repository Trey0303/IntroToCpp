#include <iostream>
#include <cstdlib>
#include "bubbleSort.h"

int main() 
{
	//Define our data
	const int array_size = 50;
	int array_to_be_sorted[array_size] = {
	14,65,63,1,54,
	89,84,9,98,57,
	71,18,21,84,69,
	28,11,83,13,42,
	64,58,78,82,13,
	9,96,14,39,89,
	40,32,51,85,48,
	40,23,15,94,93,
	35,81,1,9,43,
	39,15,17,97,52
	};
	
	//Print the unsorted array
	std::cout << "Unsorted" << std::endl;
	print_array(array_to_be_sorted, array_size);

	BubbleSort(array_to_be_sorted, array_size);
	std::cout << "Bubble Sort" << std::endl;
	print_array(array_to_be_sorted, array_size);
	system("pause");
	return 0;
}