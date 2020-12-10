#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "GuessingGame.h"
void GuessingGame()
{
	int computerGuess = 0;
	int guesses = 0;
	char yes[20] = "y";
	char no[20] = "n";
	char less[20] = "l";
	char greater[20] = "g";

	//need binary search

	//player picks number
	std::cout << "pick a number between 0 and " /*<< max*/ << " and I will try to guess the number. " << std::endl;
	int inputNumber = 0;
	std::cin >> inputNumber;

	bool guessedNumber = false;
	while (!guessedNumber)
	{
	//computer guesses a number
		std::cout << "My guess is " << computerGuess << ", am I correct? y/n" << std::endl;
		char isItTheNum[20];
		std::cin >> isItTheNum;
	//if computer gusses a number greater than human number
		//computer will guess a lower number next try
		
		if (isItTheNum == no && computerGuess > inputNumber)
		{
			std::cout << "is your number, less than or greater than? " << computerGuess << "l/g" << std::endl;
			char lessGreater[20];
			std::cin >> lessGreater;

			//if player says less
			if (lessGreater == less)
			{
				//computer guesses again
				//count goes up by one
				guesses++;
			}
			// if player says number is less than, computer will know player is cheating
			else if (lessGreater == greater)
			{
				std::cout << "lies, try again." << std::endl;
				//get player to reply less or greater again until response equals less
			}
		}
		else if (isItTheNum == no && computerGuess > inputNumber)
		{
			std::cout << "thats wrong, try again.(computer guessed wrong, computer has to guess a smaller number)" << std::endl;
		}
		
		//if computer guesses a number lower than humnan number
		// computer will guess a higher number next try
		if (isItTheNum == no && computerGuess < inputNumber)
		{
			std::cout << "is your number, less than or greater than? " << computerGuess << "l/g" << std::endl;
			char lessGreater[20];
			std::cin >> lessGreater;

			//if player says less
			if (lessGreater == greater)
			{
				//computer guesses again
				//count goes up by one
				guesses++;
			}
			// if player says number is greater than, computer will know player is cheating
			else if (lessGreater == less)
			{
				std::cout << "lies, try again." << std::endl;
				//get player to reply less or greater again until response equals greater
			}
		}
		else if (isItTheNum == yes && computerGuess < inputNumber)
		{
			std::cout << "thats wrong, try again.(computer guessed wrong, computer has to guess a bigger number)" << std::endl;
		}


		if (isItTheNum == yes && computerGuess == inputNumber)
		{
			std::cout << "it took me " << guesses << " guesses to find your number" << std::endl;
		}
		//if player responds no to computers guess when computers guess is correct
		else if (isItTheNum == no && computerGuess == inputNumber)
		{
			// computer will call out player for cheating
			std::cout << "thats wrong, try again.(computer guessed right)" << std::endl;
		}


	}

}


void HumanGuessingGame()
{
	//number of guesses
	int guesses = 0;

	//generate a random number
	int max = 20;
	std::srand(std::time(nullptr)); // use current time as seed for random generator
	int randomNumber = std::rand() % (max + 1);
	std::cout << "Random value on [0 " << max << "]: "
		<< randomNumber << '\n';

	//loop until player guess is right
	bool guessedNumber = false;
	while (!guessedNumber)
	{
		//ask player to guess number and store it
		std::cout << "pick a number between 0 and " << max << ". Try to guess the number. " << std::endl;
		int inputGuess = 0;
		std::cin >> inputGuess;

		//if number same as random number notify player that they guessed right
		if (inputGuess == randomNumber)
		{
			std::cout << "You got it right!" << std::endl;

			//change guessedNumber to true to stop loop
			guesses++;
			guessedNumber = true;

		}

		//if player number is less than random number notify player to guess a bigger number
			//keep guessedNumber false to continue loop
		if (inputGuess < randomNumber)
		{
			std::cout << "Try guessing a bigger number." << std::endl;
			guesses++;
		}
		//if player number is greater than random number notify player to guess a smaller number
			//keep guessedNumber false to continue loop
		if (inputGuess > randomNumber)
		{
			std::cout << "Try guessing a smaller number." << std::endl;
			guesses++;
		}

	}

	if (guesses == 1)
	{
		std::cout << "First try" << std::endl;

	}
	else
	{
		std::cout << "number of tries: " << guesses << std::endl;
	}
}