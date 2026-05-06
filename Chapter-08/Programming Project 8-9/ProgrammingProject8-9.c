/* 
* Write a program that generates a “random walk” across a 10 × 10 array. The array will con-
* tain characters (all '.' initially). The program must randomly “walk” from element to ele-
* ment, always going up, down, left, or right by one element. The elements visited by the
* program will be labeled with the letters A through Z, in the order visited. Here’s an example
* of the desired output:
* A . . . . . . . . .
* B C D . . . . . . .
* . F E . . . . . . .
* H G . . . . . . . .
* I . . . . . . . . .
* J . . . . . . . Z .
* K . . R S T U V Y .
* L M P Q . . . W X .
* . N O . . . . . . .
* . . . . . . . . . .
* Hint: Use the srand and rand functions (see deal.c) to generate random numbers.
* After generating a number, look at its remainder when divided by 4. There are four possible
* values for the remainder—0, 1, 2, and 3—indicating the direction of the next move. Before
* performing a move, check that (a) it won’t go outside the array, and (b) it doesn’t take us to
* an element that already has a letter assigned. If either condition is violated, try moving in
* another direction. If all four directions are blocked, the program must terminate. Here’s an
* example of premature termination:
* A B G H I . . . . .
* . C F . J K . . . .
* . D E . M L . . . .
* . . . . N O . . . .
* . . W X Y P Q . . .
* . . V U T S R . . .
* . . . . . . . . . .
* . . . . . . . . . .
* . . . . . . . . . .
* . . . . . . . . . .
* Y is blocked on all four sides, so there’s no place to put Z.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() 
{
    srand((unsigned) time(NULL));
    char board[N][N];
    int i, j;
    
    // Initialize board with '.'
    for (i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            board[i][j] = '.';
        }
    }
    
    // Random starting position for 'A'
    int row = rand() % N;
    int col = rand() % N;
    
    // Place 'A' at random starting position
    board[row][col] = 'A';
    
    // Try to place letters B through Z
    for (char letter = 'B'; letter <= 'Z'; letter++) {
        // Try all 4 directions in random order
        int direction, attempts = 0;
        bool moved = false;
        bool tried[4] = {false};
        
        while (attempts < 4) {
            direction = rand() % 4;
            
            // Skip if we've already tried this direction
            if (tried[direction]) continue;
            
            tried[direction] = true;
            attempts++;
            
            int new_row = row, new_col = col;
            
            // Calculate new position based on direction
            switch(direction) {
                case 0: new_row--; break;  // up
                case 1: new_row++; break;  // down
                case 2: new_col--; break;  // left
                case 3: new_col++; break;  // right
            }
            
            // Check if new position is valid
            if (new_row >= 0 && new_row < N && 
                new_col >= 0 && new_col < N && 
                board[new_row][new_col] == '.') {
                // Valid move found!
                row = new_row;
                col = new_col;
                board[row][col] = letter;
                moved = true;
                break;
            }
        }
        
        // If no valid move was found, terminate
        if (!moved) {
            break;
        }
    }
    
    // Print the board
    for (i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/* My Original Attempt */
/*
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() 
{
    srand((unsigned) time(NULL));
    bool step_board[N][N] = {false};
    int i, j, num_steps = 26;
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char board[N][N];
    for (i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            board[i][j] = '.';
        }
    }
    
    int x_coord = rand() % 10;
    int y_coord = rand() % 10;
    int k = 0;
    while (num_steps > 0 && k < 26){
        if (!(step_board[x_coord][y_coord])){
            board[x_coord][y_coord] = alphabet[k];
            step_board[x_coord][y_coord] = true;
            k++;
            num_steps--;
        }
        int random = rand() % 4;
        switch(random) {
            case 0: x_coord += 1; break;
            case 1: x_coord -= 1; break;
            case 2: y_coord += 1; break;
            case 3: y_coord -= 1; break;
        }
    }
    
    for (i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}*/
