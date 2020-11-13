#include <cstdlib>
#include <iostream>
#include "highscores.h"
#include "server.h"

int main()
{
	highScoreData scores[] = { {10,5}, { 20,7 }, { 106, 37 }, { 100,45 } };
	int topScores[5];

	size_t highestIdx = getHighestScore(scores, 4);
	size_t aveTime = averageTime(scores, 4);

	serverInfo lanServers[] =
	{
		{0, 0, 10, 90},
		{1, 7, 10, 33},
		{1, 4, 24, 55},
		{4, 10, 10, 160}
	};

	serverBrowserService browser;
	browser.pingLimit = 80;
	browser.region = 1;
	for (size_t i = 0; i < 4; i++)
	{
		browser.registerServer(lanServers[i]);
	}

	serverInfo avalibleServers[10];

	size_t avaliableServerCount = browser.getServers(avalibleServers, 10);

	return 0;
}