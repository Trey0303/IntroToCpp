#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "GuessingGame.h"


int GuessingGame(int array[], int start_index, int end_index, int key)
{
	int guesses = 0;
	char yes[20] = "y";
	char no[20] = "n";
	char less[20] = "l";
	char greater[20] = "g";

	bool guessedNumber = false;
	while (!guessedNumber)
	{
		while (start_index <= end_index)
		{
		//computer guesses a number
			int computerGuess = (start_index + end_index) / 2;
			std::cout << "My guess is " << computerGuess << ", am I correct? y/n" << std::endl;
			char isItTheNum[20];
			std::cin >> isItTheNum;
			
			
			if (array[computerGuess] == key)
			{
				if (strcmp(isItTheNum, yes) == 0)
				{
					std::cout << "it took me " << guesses << " guesses to find your number" << std::endl;
					guessedNumber = true;
					return computerGuess;
				}
				//if player responds no to computers guess when computers guess is correct
				else if (isItTheNum == no && computerGuess == key)
				{
					// computer will call out player for cheating
					std::cout << "thats wrong, try again.(computer guessed right)" << std::endl;
				}
				
			}
			//if computer gusses a number greater than human number
				//computer will guess a lower number next try
			if (key < array[computerGuess])
			{
				//if player said no
				if (strcmp(isItTheNum,no) == 0)
				{
					std::cout << "is your number, less than or greater than " << computerGuess << "? l/g" << std::endl;
					char lessGreater[20];
					std::cin >> lessGreater;

					//if player says less
					if (strcmp(lessGreater, less) == 0 )
					{
						//computer guesses again
						//count goes up by one
						end_index = computerGuess - 1;
						guesses++;
					}
					// if player says number is greater than, computer will know player is cheating
					else if (strcmp(lessGreater, greater) == 0)
					{
						std::cout << "lies, try again." << std::endl;
						//get player to reply less or greater again until response equals greater
					}
				}
				//yes but computers guess is wrong
				else if (strcmp(isItTheNum, yes) == 0)
				{
					std::cout << "thats wrong, try again.(computer guessed wrong, computer has to guess a smaller number)" << std::endl;
				}
				
			}
			else
			{
				//if computer guesses a number lower than humnan number
			// computer will guess a higher number next try
				if(key > array[computerGuess])
				{
					//if player said no
					if (strcmp(isItTheNum, no) == 0)
					{
						std::cout << "is your number, less than or greater than " << computerGuess << "? l/g" << std::endl;
						char lessGreater[20];
						std::cin >> lessGreater;

						//if player says greater
						if (strcmp(lessGreater, greater) == 0)
						{
							//computer guesses again
							//count goes up by one
							start_index = computerGuess + 1;
							guesses++;
						}
						// if player says number is less than, computer will know player is cheating
						else if (strcmp(lessGreater, less) == 0)
						{
							std::cout << "lies, try again." << std::endl;
							//get player to reply less or greater again until response equals less
						}
					}
					//yes but computers guess is wrong
					else if (strcmp(isItTheNum,yes) == 0)
					{
						std::cout << "thats wrong, try again.(computer guessed wrong, computer has to guess a bigger number)" << std::endl;
					}
					
				}
			}
			
		}


	}
	return -1;
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