#pragma once

struct highScoreData
{
	int highScore;
	int timeToComplete;
};

size_t getHighestScore(highScoreData* arr, size_t arrLength);
size_t averageTime(highScoreData* arr, size_t arrLength);