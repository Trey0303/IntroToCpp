#include <cstdlib>
#include <iostream>
#include <cstring>
#include "stringh.h"

int main()
{
	//Greeting
	//player inputs name
	std::cout << "whats your name?" << std::endl;
	char name[20];
	std::cin >> name;
	std::cout << "Hello "<< name << "!" <<std::endl;
	

	//Favorite Color
	std::cout << "whats your favorite color?" << std::endl;
	char color[20];
	std::cin >> color;
	char orange[20] = "orange";
	char orangeU[20] = "Orange";
	char red[20] = "red";
	char redU[20] = "Red";
	

	if(strcmp(color, orange) == 0 || strcmp(color, orangeU) == 0)
	{
		std::cout << color << " is also a fruit." << std::endl;
	}
	else if (strcmp(color, red) == 0 || strcmp(color, redU) == 0)
	{
		std::cout << color << "? Like the color of roses?" << std::endl;
	}
	else
	{
		std::cout << "I have never heard of that color before." << std::endl;
	}

	//To Upper
	std::cout << "what ever you type below will become upper case." << std::endl;
	char typesomething[20];
	std::cin >> typesomething;
	for (int i = 0; i < strlen(typesomething); i++)
	{
		if (typesomething[i] > 97 && typesomething[i] < 123)
		{
			char makeupper = (char)toupper(typesomething[i]);
			std::cout << makeupper;
		}
		
	}
	std::cout << std::endl;

	//Remove Whitespace
	std::cout << "any spaces you type below will be removed." << std::endl;
	char nospace[20];
	std::cin >> nospace;
	std::cin.getline(nospace, strlen(nospace));
	std::cout << nospace << std::endl;
	return 0;
}