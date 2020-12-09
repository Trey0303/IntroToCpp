#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "ticTacToe.h"

void DrawBoard(char board[][])
{
	//print board
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{

			std::cout << board[row][col];

			if (col < 2)
			{
				std::cout << "|";
			}
		}
		if (row < 2)
		{
			std::cout << std::endl;
			std::cout << "------";
		}

		std::cout << std::endl;
	}
}

void playerOneTurn()
{
	std::cout << "X's Turn" << std::endl;
	std::cout << "pick a number corresponding to the space you want on the grid." << std::endl;
	//// Each move must be validated.
	//	For example, if creating a console application ensure input entered by the player is valid.
	//	o An invalid move or incorrect data should result in an appropriate error message.
}

void playerTwoTurn()
{
	std::cout << "O's Turn" << std::endl;
	std::cout << "pick a number corresponding to the space you want on the grid." << std::endl;
	//// Each move must be validated.
	//	For example, if creating a console application ensure input entered by the player is valid.
	//	o An invalid move or incorrect data should result in an appropriate error message.
}