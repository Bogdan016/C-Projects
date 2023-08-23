#pragma once

/**
The initializeBoard function sets up the Tic-Tac-Toe game board so that it's empty and ready for a new game.
It clears all the positions on the board, so no 'X' or 'O' symbols are present, making the board ready for players to start a fresh game.
**/

void initializeBoard(char board[3][3]);

/**
The displayBoard function shows the current Tic-Tac-Toe board in a visual format.
It uses a 2D array to display 'X', 'O', or empty cells with formatting for clarity.
**/

void displayBoard(char board[3][3]);

/**
The checkWin function verifies if a player has won in a Tic-Tac-Toe game by analyzing rows, columns, and diagonals of the game board.
It accepts the game board and the player's symbol as inputs, and returns an integer value: 1 if the player has won and 0 if not.
**/

int checkWin(char board[3][3], char player);

/**
The checkDraw function checks if the Tic-Tac-Toe game has ended in a draw by verifying if the board is completely filled with no winner.
It returns 1 for a draw, 0 otherwise.
**/

int checkDraw(char board[3][3]);
