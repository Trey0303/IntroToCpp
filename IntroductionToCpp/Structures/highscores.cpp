#include <cstdlib>
#include <iostream>
#include "highscores.h"

size_t getHighestScore(highScoreData* arr, size_t arrLength)
{
	int highestScore = INT_MIN;

	int highestScoreIdx = 0;

	for (size_t i = 0; i < arrLength; i++)
	{
		if (arr[i].highScore > highestScore) {
			highestScoreIdx = i;
			highestScore = arr[i].highScore;
		}
	}

	return highestScoreIdx;
}

size_t averageTime(highScoreData* arr, size_t arrLength)
{
	int average = 0;
	for (size_t i = 0; i < arrLength; i++)
	{
		average = average + arr[i].timeToComplete;
	}
	average = average / arrLength;

	return average;
}