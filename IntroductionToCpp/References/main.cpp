#include <cstdlib>
#include <iostream>
#include "referencesh.h"
#include "aussiegochi.h"

int main()
{
	int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';

	// references to said variables
	int &numRef = num;
	float& decRef = dec;
	bool& tfRef = tf;
	char& letterRef = letter;

	float a = 7;
	float b = 5;
	float result;

	mult(a, b, result);
	std::cout << a << " + " << b << " = " << result << std::endl;

	std::cout << a << " " << b << std::endl;
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	
	//Aussiegochi
	Aussiegochi aus;

	aus.happiness = 5;
	aus.hunger = 4;
	aus.thirst = 3;
	aus.sanity = 8;

	std::cout << "BEFORE" << std::endl;
	std::cout << "happiness: " << aus.happiness << std::endl;
	std::cout << "hunger: " << aus.hunger << std::endl;
	std::cout << "thirst: " << aus.thirst << std::endl;
	std::cout << "sanity: " << aus.sanity << std::endl;
	feedAussie(aus);
	waterAussie(aus);
	abuseAussie(aus);
	coddleAussie(aus);
	std::cout << "AFTER" << std::endl;
	std::cout << "happiness: " << aus.happiness << std::endl;
	std::cout << "hunger: " << aus.hunger << std::endl;
	std::cout << "thirst: " << aus.thirst << std::endl;
	std::cout << "sanity: "<< aus.sanity << std::endl;


	return 0;
}


