#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "BattleArenaGame.h"

/*A custom class is used to instantiate members of each force
		• The class stores a health variable, in addition to other information
		• The game contains two arrays, each containing instances of the custom class.These arrays make
		up the opposing forces.
		• During each turn, members of each force must ‘fight’.Upon completion of each turn the
		members of each force are sorted according to health.
		• When all members of a force have been defeated, a game - over message is displayed.*/
//void teams()
//{
//	
//
//	//char teamOne[80][80] = { 'Iron Man' , 'War Machine', 'Black Widow', 'Black Panther', 'The Vision', 'Spider-Man' };
//	
//}

int TeamOneTurn(Unit teamOne[], Unit teamTwo[], int teamOneSize, int teamTwoSize, bool done)
{
	
	//matches number to member in team getting attcked
	for (int i = 0; i < teamOneSize; i++)
	{
		if (teamOne[i].alive == true)
		{
			//randomly picks a number
			int atkIdx = whoToAttack();
			std::cout << teamOne[i].name << "attacks ";

			teamTwo[atkIdx].health = teamTwo[atkIdx].health - teamOne[i].attack;
			std::cout << teamTwo[atkIdx].name << " and deals " << teamOne[i].attack << " damage." << std::endl;
			return teamTwo[atkIdx].health;
		}
	}
	
	std::cout << "Team 1 is defeated. Team 2 Wins." << std::endl;
	done = true;
	return done;

}

int random(int max)
{
	return rand() % (max + 1);
}

int random(int min, int max)
{
	int range = max - min;
	return min + random(range);
}

float attack()
{
	return random(25, 50);
	
}

float whoToAttack()
{
	return random(0, 6);

}