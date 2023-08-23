#include <stdio.h>
#include <stdlib.h>
#include "TicTacToe.h"

void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard(char board[3][3])
{
    printf("\n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf(" %c ", board[row][col]);
            if (col < 2) printf("|");
        }
        printf("\n");
        if (row < 2) printf("---|---|---\n");
    }
    printf("\n");
}


int checkWin(char board[3][3], char player)
{
    for (int i=0; i<3; i++)
    {
        if ((board[i][0]==player && board[i][1]==player && board[i][2]==player) || (board[0][i]==player && board[1][i]==player && board[2][i]==player))
        {
            return 1;
        }
    }

    if ((board[0][0]==player && board[1][1]==player && board[2][2]==player) || (board[0][2]==player && board[1][1]==player && board[2][0]==player))
    {
        return 1;
    }

    return 0;
}

int checkDraw(char board[3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}
