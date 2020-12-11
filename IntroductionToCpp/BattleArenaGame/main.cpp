#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "BattleArenaGame.h"
#include <vector>

int main()
{
	
	vector<Unit> teamOne;
	teamOne.push_back(Unit());
	teamOne[0].name = "Iron Man";
	teamOne[0].attack = attack();
	teamOne[0].number = 0;

	teamOne.push_back(Unit());
	teamOne[1].name = "War Machine";
	teamOne[1].attack = attack();
	teamOne[1].number = 1;

	teamOne.push_back(Unit());
	teamOne[2].name = "Black Widow";
	teamOne[2].attack = attack();
	teamOne[2].number = 2;

	teamOne.push_back(Unit());
	teamOne[3].name = "Black Panther";
	teamOne[3].attack = attack();
	teamOne[3].number = 3;

	teamOne.push_back(Unit());
	teamOne[4].name = "The Vision";
	teamOne[4].attack = attack();
	teamOne[4].number = 4;

	teamOne.push_back(Unit());
	teamOne[5].name = "Spider-Man";
	teamOne[5].attack = attack();
	teamOne[5].number = 5;

	

	std::cout << teamOne.size() << std::endl;

	vector<Unit> teamTwo;
	teamTwo.push_back(Unit());
	teamTwo[0].name = "Captain America";
	teamTwo[0].attack = attack();
	teamOne[0].number = 0;

	teamTwo.push_back(Unit());
	teamTwo[1].name = "Hawkeye";
	teamTwo[1].attack = attack();
	teamOne[1].number = 1;

	teamTwo.push_back(Unit());
	teamTwo[2].name = "Falcon";
	teamTwo[2].attack = attack();
	teamOne[2].number = 2;

	teamTwo.push_back(Unit());
	teamTwo[3].name = "Bucky Barnes";
	teamTwo[3].attack = attack();
	teamOne[3].number = 3;

	teamTwo.push_back(Unit());
	teamTwo[4].name = "Ani-Man";
	teamTwo[4].attack = attack();
	teamOne[4].number = 4;

	teamTwo.push_back(Unit());
	teamTwo[5].name = "Scarlet Witch";
	teamTwo[5].attack = attack();
	teamOne[5].number = 5;

	std::cout << int(teamTwo.size()) << std::endl;

	int teamOneSize = teamOne.size();
	int teamTwoSize = teamTwo.size();

	bool done = false;
	while(!done)
	{
		done = TeamOneTurn(teamOne, teamTwo, teamOneSize, teamTwoSize, done);
		
	}



	return 0;
}