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
			std::cout << teamOne[i].name << " attacks ";

			teamTwo[atkIdx].health = teamTwo[atkIdx].health - teamOne[i].attack;
			std::cout << teamTwo[atkIdx].name << " and deals " << teamOne[i].attack << " damage." << std::endl;
			return teamTwo[atkIdx].health;
		}
	}
	
	


}

int TeamTwoTurn(Unit teamOne[], Unit teamTwo[], int teamOneSize, int teamTwoSize, bool done)
{

	//matches number to member in team getting attcked
	for (int i = 0; i < teamTwoSize; i++)
	{
		if (teamTwo[i].alive == true)
		{
			//randomly picks a number
			int atkIdx = whoToAttack();
			std::cout << teamTwo[i].name << " attacks ";

			teamOne[atkIdx].health = teamOne[atkIdx].health - teamTwo[i].attack;
			std::cout << teamOne[atkIdx].name << " and deals " << teamTwo[i].attack << " damage." << std::endl;
			return teamOne[atkIdx].health;
		}
	}

	

}

bool stillOkOne(Unit team[], int teamSize, bool done)
{
	int count = 0;
	for (int i = 0; i < teamSize; i++)
	{
		
		if (team[i].health <= 0)
		{
			std::cout << team[i].name << " is out of the fight.";
			team[i].alive = false;
			count++;
		}
		

	}
	if (count == teamSize)
	{
		std::cout << "Team 1 is defeated. Team 2 Wins." << std::endl;
		done = true;
	}
	
	return done;
}

bool stillOkTwo(Unit team[], int teamSize, bool done)
{
	int count = 0;
	for (int i = 0; i < teamSize; i++)
	{

		if (team[i].health <= 0)
		{
			std::cout << team[i].name << " is out of the fight.";
			team[i].alive = false;
			count++;
		}
		

	}
	if (count == teamSize)
	{
		std::cout << "Team 2 is defeated. Team 1 Wins." << std::endl;
		done = true;
	}

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