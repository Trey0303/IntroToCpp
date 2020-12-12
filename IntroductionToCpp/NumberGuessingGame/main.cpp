#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "GuessingGame.h"
using namespace std;

int main()
{
	int start = 1;
	int end = 100;
	//need binary search

	//player picks number
	std::cout << "pick a number between " << start << " and " << end << " I will try to guess the number. " << std::endl;
	int inputNumber = -1;
	std::cin >> inputNumber;

	int r = GuessingGame(start, end, inputNumber);

	if (r == -1)
	{
		std::cout << "something went wrong" << std::endl;
	}
	else
	{
		std::cout << "Your number is " << inputNumber << std::endl;
		cout << "Press Enter to end";
		cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
	}

	//HumanGuessingGame();
	return 0;
}