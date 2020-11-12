#pragma once

struct Aussiegochi
{
	float happiness = 0;
	float hunger = 0;
	float thirst = 0;
	float sanity = 0;
};

void feedAussie(Aussiegochi& aus);
void waterAussie(Aussiegochi& aus);
void abuseAussie(Aussiegochi& aus);
void coddleAussie(Aussiegochi& aus);