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