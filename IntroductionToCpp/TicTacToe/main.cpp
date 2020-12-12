#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "ticTacToe.h"

int main()
{
	//Your game may be console based or use a graphical framework
		// Your game must be two - player(PVP)
	char playerOne = 'X';
	char playerTwo = 'O';

	//to know when there is a winner to stop game
	bool winner = false;
	bool xTurn = true;
	bool oTurn = false;


	//The 3x3 game board should be represented internally as a 2D array.
	char numberBoard[3][3] = { { '1','2','3' },
								{ '4', '5', '6' },
								{ '7','8','9' } };
		
	char gameBoard[3][3]{ ' ',' ',' ',
						 ' ',' ',' ',
						 ' ',' ',' ' };

	//print both boards
	DrawBoard(gameBoard);
	std::cout << std::endl;
	DrawBoard(numberBoard);
	


	//When a player places an ‘x’ or ‘o’ on the board, the player’s move should be stored in
		//the corresponding location in the 2D array.

	//have player one and two turns loop until there is a winner
	while (!winner)
	{
		if (!winner && xTurn == true) 
		{
			//Xs turn
			bool notXTurn = playerOneTurn(gameBoard, numberBoard, xTurn, oTurn);
			xTurn = notXTurn;
			std::cout << std::endl;
			DrawBoard(gameBoard);
			std::cout << std::endl;
			DrawBoard(numberBoard);
			std::cout << std::endl;
			//Check if anyone has won
			bool xWins = whoWon(gameBoard, numberBoard, winner);
			winner = xWins;

		}
		else if (!winner && xTurn == false)
		{
			//Os turn
			bool isXTurn = playerTwoTurn(gameBoard, numberBoard, xTurn, oTurn);
			xTurn = isXTurn;
			std::cout << std::endl;
			DrawBoard(gameBoard);
			std::cout << std::endl;
			DrawBoard(numberBoard);
			std::cout << std::endl;
			//Check if anyone has won
			bool oWins = whoWon(gameBoard, numberBoard, winner);
			winner = oWins;
		}
		

		
	

	}
	


	return 0;
}