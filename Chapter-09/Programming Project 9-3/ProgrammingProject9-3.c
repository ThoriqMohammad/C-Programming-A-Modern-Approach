/* Problem 
* Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
* void generate_random_walk(char walk[10][10]);
* void print_array(char walk[10][10]);
* main first calls generate_random_walk, which initializes the array to contain '.'
* characters and then replaces some of these characters by the letters A through Z, as
* described in the original project. main then calls print_array to display the array on
* the screen.
*/

/* Solution */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N]) {
    // Initialize board with '.'
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            walk[i][j] = '.';
        }
    }

    // Random starting position for 'A'
    int row = rand() % N;
    int col = rand() % N;
    walk[row][col] = 'A';

    // Try to place letters B through Z
    for (char letter = 'B'; letter <= 'Z'; letter++) {
        bool moved = false;
        bool tried[4] = {false};
        int attempts = 0;

        while (attempts < 4) {
            int direction = rand() % 4;
            if (tried[direction]) continue;
            tried[direction] = true;
            attempts++;

            int new_row = row, new_col = col;
            switch (direction) {
                case 0: new_row--; break; // up
                case 1: new_row++; break; // down
                case 2: new_col--; break; // left
                case 3: new_col++; break; // right
            }

            if (new_row >= 0 && new_row < N &&
                new_col >= 0 && new_col < N &&
                walk[new_row][new_col] == '.') {
                row = new_row;
                col = new_col;
                walk[row][col] = letter;
                moved = true;
                break;
            }
        }
        if (!moved) break; // no valid move, stop placing more letters
    }
}

void print_array(char walk[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    srand((unsigned) time(NULL));
    char board[N][N];

    generate_random_walk(board);
    print_array(board);

    return 0;
}
