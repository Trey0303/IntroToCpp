#pragma once

void DrawBoard(char boar[3][3]);

bool playerOneTurn(char gBoard[3][3], char numBoard[3][3], bool xTurn, bool oTurn);

bool playerTwoTurn(char gBoard[3][3], char numBoard[3][3], bool xTurn, bool oTurn);

bool whoWon(char gBoard[3][3], char numBoard[3][3], bool winner);