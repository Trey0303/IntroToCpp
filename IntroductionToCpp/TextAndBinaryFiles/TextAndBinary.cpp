//#include <cstdlib>
#include <iostream>
//#include <cstring>
#include <fstream>
#include <string>
#include "TextAndBinary.h"

void digitalPrinter()
{
	while (true)
	{

		//prompt user for file path
		std::cout << "What file would you like to open?" << std::endl;

		std::string userPath;
		std::getline(std::cin, userPath);

		//type '!exit' to end program
		if (userPath == "!exit")
		{
			return;
		}

		//open said file
		std::fstream readFile;
		readFile.open(userPath, std::ios::in);

		//display error if not, then prompt again
		if (!readFile.good())
		{
			std::cerr << "Failed to open file." << std::endl;
			continue;
		}

		//display if opened
		while (readFile.eof())
		{
			std::string line;
			std::getline(readFile, line);
			std::cout << line << std::endl;
		}
		readFile.close();
	}

	return;

}

void myInfo()
{
	//prompt for file path to save to
	//prompt user for file path
	std::cout << "What file would you like to open?" << std::endl;

	std::string userPath;
	std::getline(std::cin, userPath);

	//if path is good, ask for info
	std::fstream saveFile;
	saveFile.open(userPath, std::ios::out);

	//if not, display an error and exit
	if (!saveFile.good()) 
	{
		std::cerr << "unable to save to the specified path." << std::endl;
		return;
	}

	//ask questions
	std::string userInput;

	std::cout << "Whats your favorite color?" << std::endl;
	std::getline(std::cin, userInput);

	//save userInput
	saveFile << userInput << std::endl;

	std::cout << "Whats your name?" << std::endl;
	std::getline(std::cin, userInput);

	//save userInput
	saveFile << userInput << std::endl;

	saveFile.close();
}