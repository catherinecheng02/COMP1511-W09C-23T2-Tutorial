#include <stdio.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // TODO Implement this function.
    // horizontal
    int row = 0;
    
    while (row < SIZE) {
        // check if this row is = player
        int counter = 0;
        int col = 0;
        while (col < SIZE) {
            if (board[row][col] == player) {
                counter++;
            }
            col++;
        }
        if (counter == SIZE) {
            return TRUE;
        }
        row++;
        
    }
    // vertical
    // diagonal line
    int row = 0;
    int diag1_count = 0;
    int diag2_count = 0;
    while (row < SIZE) {
        
    
        int col = 0;
        while (col < SIZE) {
            if (row == col && board[row][col] == player) {
                diag1_count++;
            }
            if ((row + col == SIZE - 1) && board[row][col] == player) {
                diag2_count++;
            }
            col++;
        }

        row++;
    }

    if (diag1_count == SIZE || diag2_count == SIZE) {
        return TRUE;
    }

    return FALSE;
}
