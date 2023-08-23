#include <stdio.h>
#include <stdlib.h>
#include "TicTacToe.h"

int main()
{
    char board[3][3] ={ {' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};

    int row, col;
    char currentPlayer = 'X';
    char playAgain = 'y';

    printf("Tic-Tac-Toe!\n");

    while (playAgain == 'y' || playAgain == 'Y')
    {
        while (1)
        {
            displayBoard(board);
            printf("Player %c, enter row (0-2) and column (0-2): ", currentPlayer);
            scanf("%d %d", &row, &col);

            if (row<0 || row>2 || col<0 || col>2 || board[row][col]!=' ')
            {
                printf("Invalid move. Try again.\n");
                continue;
            }

            board[row][col] = currentPlayer;

            if (checkWin(board, currentPlayer))
            {
                displayBoard(board);
                printf("Player %c wins!\n", currentPlayer);
                break;
            }
            else if (checkDraw(board))
            {
                displayBoard(board);
                printf("It's a draw!\n");
                break;
            }

            if (currentPlayer == 'X')
            {
                currentPlayer = 'O';
            }
            else
            {
                currentPlayer = 'X';
            }
        }

        displayBoard(board);
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

        if (playAgain == 'y' || playAgain == 'Y')
        {
            initializeBoard(board);
            currentPlayer = 'X';
        }
    }

    printf("Thanks for playing!\n");
    return 0;
}
