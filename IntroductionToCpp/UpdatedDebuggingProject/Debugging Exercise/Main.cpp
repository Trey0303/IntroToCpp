// A Debugging Exercise by Marc Chee (marcc@aie.edu.au)
// 18/12/2016

// Marines are trying to "de-bug" an area (haha . . . haha)
// However something's up with this code . . . figure out what's going wrong
// When you're finished, there should be no compiler errors or warnings
// The encounter should also run and finish correctly as per the rules in the comments

// In many cases there are differences between what's in otherwise identical sections
// for Marines and Zerglings. It's good to be able to tell what the differences are
// and why they might be important.

// What's efficient and inefficient? Why?
// What uses more memory and what doesn't? Why?

// Last modified by Terry Nguyen (terryn@aie.edu.au)
// 10/09/2019

#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <limits>

#include "Marine.h"
#include "Zergling.h"
#include "Entity.h"

using std::cout;
using std::endl;

// Is there a Marine Alive?
bool marineAlive(Marine squadArr[], size_t arrSize)
{
	if (arrSize < 1) {
		return false;
	}
	int count = 0;
	for (int i = 0; i < arrSize; i++) // go through the squad
	{
		squadArr[i].isAlive();
		if (squadArr[i].isAlive() == false)
		{
			count++;
		}
		if (count == arrSize /*&& squadArr[i].isAlive() == false*/)
		{
			return false;
		}
		else {
			return true;

		}
	}
}

// Is there a zergling Alive
bool zerglingAlive(Zergling swarmArr[], size_t arrSize)
{
	if (arrSize < 1) {
		return false;
	}
	int count = 0;
	for (int i = 0; i < arrSize; i++) // go through the squad
	{
		
		swarmArr[i].isAlive();
		if (swarmArr[i].isAlive() == false)
		{
			count++;
		}
		if (count == arrSize)
		{
			return false;
		}
		else {
			return true;

		}
	}
}

int main()
{
	srand(time(NULL));


	std::vector<Marine> squad;
	squad.push_back(Marine());
	squad[0];
	squad.push_back(Marine());
	squad[1];
	squad.push_back(Marine());
	squad[2];
	squad.push_back(Marine());
	squad[3];
	squad.push_back(Marine());
	squad[4];
	squad.push_back(Marine());
	squad[5];
	squad.push_back(Marine());
	squad[6];
	squad.push_back(Marine());
	squad[7];
	squad.push_back(Marine());
	squad[8];
	squad.push_back(Marine());
	squad[9];

	squad.size();

	std::vector<Zergling> swarm;
	swarm.push_back(Zergling());
	swarm[0];
	swarm.push_back(Zergling());
	swarm[1];
	swarm.push_back(Zergling());
	swarm[2];
	swarm.push_back(Zergling());
	swarm[3];
	swarm.push_back(Zergling());
	swarm[4];
	swarm.push_back(Zergling());
	swarm[5];
	swarm.push_back(Zergling());
	swarm[6];
	swarm.push_back(Zergling());
	swarm[7];
	swarm.push_back(Zergling());
	swarm[8];
	swarm.push_back(Zergling());
	swarm[9];
	swarm.push_back(Zergling());
	swarm[10];
	swarm.push_back(Zergling());
	swarm[11];
	swarm.push_back(Zergling());
	swarm[12];
	swarm.push_back(Zergling());
	swarm[13];
	swarm.push_back(Zergling());
	swarm[14];
	swarm.push_back(Zergling());
	swarm[15];
	swarm.push_back(Zergling());
	swarm[16];
	swarm.push_back(Zergling());
	swarm[17];
	swarm.push_back(Zergling());
	swarm[18];
	swarm.push_back(Zergling());
	swarm[19];

	swarm.size();

	bool squadT = true;
	bool swarmT = true;

	cout << "A squad of marines approaches a swarm of Zerglings and opens fire! The Zerglings charge!" << endl;
	// Attack each other until only one team is left alive
	while (marineAlive(squad.data(), squad.size()) == true && zerglingAlive(swarm.data(), swarm.size()) == true) // If anyone is left alive to fight . . .
	{

		if (marineAlive(squad.data(), squad.size())/* && squadT*/) // if there's at least one marine alive
		{
			//for (int i = 0; i < sizeof(squad); i++) // go through the squad
			//{
				// each marine will attack the first zergling in the swarm
				int damage = squad[0].attack();
				swarm[0].takeDamage(damage);
				cout << "A marine fires for " << damage << " damage. " << endl;
				if (swarm[0].isAlive() == false) // if the zergling dies, it is marked as such
				{
					cout << "The zergling target dies." << endl;
					swarm.erase(swarm.begin());
					cout << "There are " << swarm.size() << " zergling left." << endl;
					cout << endl;

				}
				else {
					cout << "The zergling has " << swarm[0].health << " health left " << endl;
					cout << endl;
				}
			//}
			//swarmT = true;
			//squadT = false;
		}
		if (zerglingAlive(swarm.data(), swarm.size()) /*&& !squadT*/) // if there's at least one zergling alive
		{
			//for (int i = 0; i < sizeof(swarm); i++) // loop through zerglings
			//{
			int damage = squad[0].attack();
			squad[0].takeDamage(damage);
			cout << "A zergling attacks for " << damage << " damage." << endl;
			if (squad[0].isAlive() == false)
			{
				cout << "The marine succumbs to his wounds." << endl;
				squad.erase(squad.begin());
				cout << "There are " << squad.size() << " marines left." << endl;
				cout << endl;
			}
			else {
				cout << "The marine has " << squad[0].health << " health left " << endl;
				cout << endl;
			}

			//}
			//swarmT = false;
			//squadT = true;
		}
	}

	if (squad.size() < 1) {

		cout << "The fight is over. ";
		cout << "The Zerg win." << endl;

	}

	if (swarm.size() < 1)
	{
		cout << "The fight is over. ";
		cout << "The Marines win." << endl;
	}

	// Once one team is completely eliminated, the fight ends and one team wins
    return 0;
}

