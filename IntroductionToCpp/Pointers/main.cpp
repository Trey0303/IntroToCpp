#include <cstdlib>
#include <iostream>
#include "pointerh.h"

int main()
{
	//print float array
	float arrayfloat[10];
	//get size of array
	int size = 0;
	for (float i : arrayfloat)
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		arrayfloat[i] = i;
	}
	printFloats(arrayfloat, size);
	
	//sum of int array
	int arrayint[10];
	//get size of array
	size = 0;
	for (float i : arrayint)
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		arrayint[i] = i;
	}
	arraySum(arrayint, size);

	//change bool array values to what ever default value is
	bool arraybool[10];
	//get size of array
	size = 0;
	for (float i : arraybool)
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		arraybool[i] = i;
		std::cout << arraybool[i];
	}
	std::cout << std::endl;
	initBools(arraybool, size, false);

	//array values turn to 0
	size = 0;
	int *zero = zeroArray(size);
	for (int i = 0; i < size; i++)
	{
		std::cout << arraybool[i];
	}
	delete[] zero;

	//duplicate array


	
	return 0;
}