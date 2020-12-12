#pragma once
using namespace std;

struct Unit
{
	
	string name;
	float health = 100;
	float attack = 0;
	float toFight = 0;
	float attackWho = 0;
	float number = 0;
	bool alive = true;
    
};

//void teams();
float attack();
int random(int max);
int random(int min, int max);
float whoToAttack();
int TeamOneTurn(Unit teamOne[], Unit teamTwo[], int teamOneSize, int teamTwoSize, bool done);
int TeamTwoTurn(Unit teamOne[], Unit teamTwo[], int teamOneSize, int teamTwoSize, bool done);
bool stillOkOne(Unit team[], int teamSize, bool done);
bool stillOkTwo(Unit team[], int teamSize, bool done);