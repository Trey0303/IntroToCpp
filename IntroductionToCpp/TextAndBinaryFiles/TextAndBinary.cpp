//#include <cstdlib>
#include <iostream>
//#include <cstring>
#include <fstream>
#include <string>
#include "TextAndBinary.h"

void digitalPrinter()
{
	//prompt user for file path
	std::cout << "What file would you like to open?" << std::endl;

	std::string userPath;
	std::getline(std::cin, userPath);

	//open said file
	std::fstream readFile;
	readFile.open(userPath, std::ios::in);

	//display error if not, then prompt again
	if (!readFile.good())
	{
		std::cerr << "Failed to open file." << std::endl;
		return;
	}

	//display if opened
	while (readFile.eof())
	{
		std::string line;
		std::getline(readFile, line);
		std::cout << line << std::endl;
	}

	return;

}