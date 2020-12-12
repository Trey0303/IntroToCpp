#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "ticTacToe.h"

void DrawBoard(char board[3][3])
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

bool whoWon(char gBoard[3][3], char numBoard[3][3], bool winner, int count)
{
	//Win conditions
	
	
	//for X to win

	//               1                       2                    3
	if (gBoard[0][0] == 'X' && gBoard[0][1] == 'X' && gBoard[0][2] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               4                       5                    6
	else if (gBoard[1][0] == 'X' && gBoard[1][1] == 'X' && gBoard[1][2] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               7                       8                    9
	else if (gBoard[2][0] == 'X' && gBoard[2][1] == 'X' && gBoard[2][2] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               1                       4                    7
	else if (gBoard[0][0] == 'X' && gBoard[1][0] == 'X' && gBoard[2][0] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               2                       5                    8
	else if (gBoard[0][1] == 'X' && gBoard[1][1] == 'X' && gBoard[2][1] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               3                       6                    9
	else if (gBoard[0][2] == 'X' && gBoard[1][2] == 'X' && gBoard[2][2] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               1                       5                    9
	else if (gBoard[0][0] == 'X' && gBoard[1][1] == 'X' && gBoard[2][2] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               3                       5                    7
	else if (gBoard[0][2] == 'X' && gBoard[1][1] == 'X' && gBoard[2][0] == 'X')
	{
		std::cout << "X's wins" << std::endl;
		winner = true;
		return winner;
	}



	//for O to win

	//               1                       2                    3
	else if (gBoard[0][0] == 'O' && gBoard[0][1] == 'O' && gBoard[0][2] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               4                       5                    6
	else if (gBoard[1][0] == 'O' && gBoard[1][1] == 'O' && gBoard[1][2] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               7                       8                    9
	else if (gBoard[2][0] == 'O' && gBoard[2][1] == 'O' && gBoard[2][2] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               1                       4                    7
	else if (gBoard[0][0] == 'O' && gBoard[1][0] == 'O' && gBoard[2][0] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               2                       5                    8
	else if (gBoard[0][1] == 'O' && gBoard[1][1] == 'O' && gBoard[2][1] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               3                       6                    9
	else if (gBoard[0][2] == 'O' && gBoard[1][2] == 'O' && gBoard[2][2] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               1                       5                    9
	else if (gBoard[0][0] == 'O' && gBoard[1][1] == 'O' && gBoard[2][2] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//               3                       5                    7
	else if (gBoard[0][2] == 'O' && gBoard[1][1] == 'O' && gBoard[2][0] == 'O')
	{
		std::cout << "O's wins" << std::endl;
		winner = true;
		return winner;
	}
	//board full/no winner/if all turns are exausted
	if(count == 9)
	{
		std::cout << "tie" << std::endl;
	}
	else
	{
		winner = false;
		return winner;
	}
}

bool playerOneTurn(char gBoard[3][3], char numBoard[3][3], bool xTurn, bool oTurn)
{
	char playerOne = 'X';
	int p1 = 0;
	bool turnOver = false;
	//edit space 1
	while (!turnOver)
	{
		std::cout << "X's Turn" << std::endl;
		std::cout << "pick a number corresponding to the space you want on the grid." << std::endl;
		std::cin >> p1;
		//// Each move must be validated.
		//	For example, if creating a console application ensure input entered by the player is valid.
		//	o An invalid move or incorrect data should result in an appropriate error message.
		if(p1 == 1)
		{
			if (gBoard[0][0] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[0][0] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[0][0] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 2
		else if (p1 == 2)
		{
			if (gBoard[0][1] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[0][1] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[0][1] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 3
		else if (p1 == 3)
		{
			if (gBoard[0][2] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[0][2] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[0][2] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 4
		else if (p1 == 4)
		{
			if (gBoard[1][0] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[1][0] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[1][0] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 5
		else if (p1 == 5)
		{
			if (gBoard[1][1] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[1][1] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[1][1] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 6
		else if (p1 == 6)
		{
			if (gBoard[1][2] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[1][2] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[1][2] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 7
		else if (p1 == 7)
		{
			if (gBoard[2][0] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[2][0] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[2][0] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 8
		else if (p1 == 8)
		{
			if (gBoard[2][1] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[2][1] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[2][1] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
		//edit space 9
		else if (p1 == 9)
		{
			if (gBoard[2][2] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[2][2] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[2][2] = 'X';
				xTurn = false;
				turnOver = true;
			}
		}
	}
	return xTurn;
}

bool playerTwoTurn(char gBoard[3][3], char numBoard[3][3], bool xTurn, bool oTurn)
{
	char playerTwo = 'O';
	int p2 = 0;
	int turnOver = false;

	while (!turnOver)
	{
		std::cout << "O's Turn" << std::endl;
		std::cout << "pick a number corresponding to the space you want on the grid." << std::endl;
		std::cin >> p2;
		//// Each move must be validated.
		//	For example, if creating a console application ensure input entered by the player is valid.
		//	o An invalid move or incorrect data should result in an appropriate error message.
		if (p2 == 1)
		{
			if (gBoard[0][0] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[0][0] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[0][0] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 2
		else if (p2 == 2)
		{
			if (gBoard[0][1] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[0][1] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[0][1] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 3
		else if (p2 == 3)
		{
			if (gBoard[0][2] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[0][2] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[0][2] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 4
		else if (p2 == 4)
		{
			if (gBoard[1][0] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[1][0] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[1][0] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 5
		else if (p2 == 5)
		{
			if (gBoard[1][1] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[1][1] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[1][1] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 6
		else if (p2 == 6)
		{
			if (gBoard[1][2] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[1][2] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[1][2] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 7
		else if (p2 == 7)
		{
			if (gBoard[2][0] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[2][0] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[2][0] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 8
		else if (p2 == 8)
		{
			if (gBoard[2][1] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[2][1] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[2][1] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}
		//edit space 9
		else if (p2 == 9)
		{
			if (gBoard[2][2] == 'X')
			{
				std::cout << "invalid move" << std::endl;
			}
			else if (gBoard[2][2] == 'O')
			{
				std::cout << "invalid move" << std::endl;
			}
			else
			{
				gBoard[2][2] = 'O';
				xTurn = true;
				turnOver = true;
			}
		}

	}
	return xTurn;
}

//if (p2 == 1)
//{
//	if (gBoard[1][1] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[1][1] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[1][1] = 'O';
//	}
//}
////edit space 2
//else if (p2 == 2)
//{
//	if (gBoard[2][1] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[2][1] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[2][1] = 'O';
//	}
//}
////edit space 3
//else if (p2 == 3)
//{
//	if (gBoard[3][1] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[3][1] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[3][1] = 'O';
//	}
//}
////edit space 4
//else if (p2 == 4)
//{
//	if (gBoard[1][2] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[1][2] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[1][2] = 'O';
//	}
//}
////edit space 5
//else if (p2 == 5)
//{
//	if (gBoard[2][2] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[2][2] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[2][2] = 'O';
//	}
//}
////edit space 6
//else if (p2 == 6)
//{
//	if (gBoard[3][2] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[3][2] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[3][2] = 'O';
//	}
//}
////edit space 7
//else if (p2 == 7)
//{
//	if (gBoard[1][3] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[1][3] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[1][3] = 'O';
//	}
//}
////edit space 8
//else if (p2 == 8)
//{
//	if (gBoard[2][3] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[2][3] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[2][3] = 'O';
//	}
//}
////edit space 9
//else if (p2 == 9)
//{
//	if (gBoard[3][3] == 'X')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else if (gBoard[3][3] == 'O')
//	{
//		std::cout << "invalid move" << std::endl;
//	}
//	else
//	{
//		gBoard[3][3] = 'O';
//	}
//}