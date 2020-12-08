#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "GuessingGame.h"
void GuessingGame()
{
	//player picks number

	//computer guesses a number

	//if computer gusses a number greater than human number
		//computer will guess a lower number next try
		// if player says number is less than, computer will know player is cheating

	//if computer guesses a number lower than humnan number
		// computer will guess a higher number next try
		// if player says number is greater than, computer will know player is cheating
	
	//if player responds no to computers guess when computers guess is correct
		// computer will call out player for cheating
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