#include <stdio.h>

#define DIMENSIONS 3
#define EMPTY 0

char get_piece(int c);
void print_board(int board[DIMENSIONS][DIMENSIONS]);

int main(void) {
    int i, j;   // Counters
    int row, col;

    int board[DIMENSIONS][DIMENSIONS];

    for (row = 0; row < DIMENSIONS; row++)
        for (col = 0; col < DIMENSIONS; col++)
            board[col][row] = 0;
    
    print_board(board);

    return 0;
}

char get_piece(int c) {
    if (c == 1)
        return '0';
    else if (c == 2)
        return 'X';
    return ' ';
}

void print_board(int board[DIMENSIONS][DIMENSIONS]) {
    printf("#############\n");
    printf(" TIC-TAC-TOE\n");
    printf("#############\n\n");
    printf("   A   B   C\n");
    printf("1  %c | %c | %c \n", get_piece(board[0][0]), get_piece(board[0][1]), get_piece(board[0][2]));
    printf("  ---+---+---\n");
    printf("2  %c | %c | %c \n", get_piece(board[1][0]), get_piece(board[1][1]), get_piece(board[1][2]));
    printf("  ---+---+---\n");
    printf("3  %c | %c | %c\n\n", get_piece(board[2][0]), get_piece(board[2][1]), get_piece(board[2][2]));
}
