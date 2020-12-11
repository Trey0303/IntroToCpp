#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "GuessingGame.h"

int main()
{
	int start = 0;

	//need binary search
	const int array_size = 20;
	int array[array_size] = {
	1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	//player picks number
	std::cout << "pick a number between 0 and 20 and I will try to guess the number. " << std::endl;
	int inputNumber = -1;
	std::cin >> inputNumber;

	int r = GuessingGame(array, start, array_size, inputNumber);

	if (r == -1)
	{
		std::cout << "something went wrong" << std::endl;
	}
	else
	{
		std::cout << "Your number is " << inputNumber << r << std::endl;
	}

	//HumanGuessingGame();
	return 0;
}