#include <cstdlib>
#include <iostream>
#include "aussiegochi.h"

void feedAussie(Aussiegochi& aus)
{
	aus.hunger = aus.hunger - 3;
	aus.happiness = aus.happiness + 2;
	aus.sanity = aus.sanity + 3;
}

void waterAussie(Aussiegochi& aus)
{
	aus.thirst = aus.thirst - 3;
	aus.happiness = aus.happiness + 2;
	aus.sanity = aus.sanity + 3;
}

void abuseAussie(Aussiegochi& aus)
{
	aus.sanity = aus.sanity - 8;
	aus.happiness = aus.happiness - 4;
}

void coddleAussie(Aussiegochi& aus)
{
	aus.happiness = aus.happiness + 5;
	aus.sanity = aus.sanity + 3;
}