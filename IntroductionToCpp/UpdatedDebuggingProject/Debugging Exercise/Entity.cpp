#include "Entity.h"



Entity::Entity()
{
	
}


Entity::~Entity()
{
}

bool Entity::isAlive()
{
	if (health > 0){
		
		return true;

	}
	else {
		return false;
	}
}
