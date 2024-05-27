#include <stdio.h>
/*
chess board is a 8 by 8 square
so iterate one for loop over the other
each less than 8

*/

void print_chessboard(char (*a)[8]);

void print_chessboard(char (*a)[8]){
    int i,j;

    for (i = 0; i < 8; i++){
        for (j = 0; j < 8; j++){
            putchar(a[i][j]);
        }
        putchar('\n');
    }
}

int main (void){
       char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0); 
}