#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "BattleArenaGame.h"
#include <vector>
#include <limits>

int main()
{
	srand(time(NULL));

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
		//checks characters and stats
		std::cout <<  "Team One: " << std::endl;
		for (int i = 0; i < teamOne.size(); i++)
		{
			std::cout << " " << teamOne[i].name << " " << std::endl;
			std::cout << " " << "health: " << teamOne[i].health << " " << std::endl;
			std::cout << " " << "attack: " << teamOne[i].attack << " " << std::endl;
			std::cout << " " << std::endl;
		}

		std::cout << "Team Two: " << std::endl;
		for (int i = 0; i < teamTwo.size(); i++)
		{
			std::cout << " " << teamTwo[i].name << " " << std::endl;
			std::cout << " " << "health: " << teamTwo[i].health << " " << std::endl;
			std::cout << " " << "attack: " << teamTwo[i].attack << " " << std::endl;
			std::cout << " " << std::endl;
		}

		cout << "Press Enter to Continue";
		cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

		if (!done)
		{
			//team ones turn
			TeamOneTurn(teamOne.data(), teamTwo.data(), teamOneSize - 1, teamTwoSize -1, done);

			stillOkTwo(teamTwo.data(), teamTwoSize, done);

			cout << "Press Enter to Continue";
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
		}
		
		if (!done)
		{
			//team twos turn
			TeamTwoTurn(teamOne.data(), teamTwo.data(), teamOneSize - 1, teamTwoSize - 1, done);
		
			stillOkOne(teamTwo.data(), teamTwoSize, done);

			cout << "Press Enter to Continue";
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

		}
		
		
	}



	return 0;
}