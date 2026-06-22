/* Problem
* Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
* void create_magic_square(int n, char magic_square[n][n]);
* void print_magic_square(int n, char magic_square[n][n]);
* After obtaining the number n from the user, main will call create_magic_square,
* passing it an n x n array that is declared inside main. create_magic_square will fill
* the array with the numbers 1, 2, …, n2 as described in the original project. main will then
* call print_magic_square, which will display the array in the format described in the
* original project. Note: If your compiler doesn’t support variable-length arrays, declare the
* array in main to be 99 x 99 instead of n x n and use the following prototypes instead:
* void create_magic_square(int n, char magic_square[99][99]);
* void print_magic_square(int n, char magic_square[99][99]);
*/

/* Solution */

#include <stdio.h>

// Function prototypes (using fixed-size array of 99x99)
void create_magic_square(int n, int magic_square[99][99]);
void print_magic_square(int n, int magic_square[99][99]);

int main(void) {
    int n;
    int magic[99][99] = {0};   // fixed 99x99 array (initialized to all zeros)

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    // Validate input
    if (n < 1 || n > 99 || n % 2 == 0) {
        printf("Error: size must be an odd number between 1 and 99.\n");
        return 1;
    }

    create_magic_square(n, magic);
    print_magic_square(n, magic);

    return 0;
}

// Fills the n×n magic square using the standard algorithm
void create_magic_square(int n, int magic_square[99][99]) {
    // Starting position: row 0, middle column
    int row = 0;
    int col = n / 2;

    // Place numbers 1 through n*n
    for (int num = 1; num <= n * n; num++) {
        magic_square[row][col] = num;

        // Tentative next position: up one row, right one column
        int nextRow = (row - 1 + n) % n;   // wrap around if negative
        int nextCol = (col + 1) % n;

        // If the cell is already occupied, move directly below instead
        if (magic_square[nextRow][nextCol] != 0) {
            nextRow = (row + 1) % n;
            nextCol = col;
        }
        row = nextRow;
        col = nextCol;
    }
}

// Prints the n×n magic square in a nicely formatted grid
void print_magic_square(int n, int magic_square[99][99]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", magic_square[i][j]);
        }
        printf("\n");
    }
}
