#pragma once

#include <iostream>
#include<string>

class Entity
{
public:
	Entity();
	~Entity();

	//virtual int attack();
	//virtual void takeDamage(int damage);
	//bool alive = true;
	
	bool isAlive();

	int health;
	int maxHealth;

private:

};

