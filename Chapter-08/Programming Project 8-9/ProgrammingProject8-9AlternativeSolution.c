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
    
    // Initialize boards
    char board[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = '.';
        }
    }
    
    // Alphabet for labeling steps
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                         'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    // Directions: 0=up, 1=right, 2=down, 3=left
    int dx[4] = {-1, 0, 1, 0};  // row changes
    int dy[4] = {0, 1, 0, -1};  // col changes
    
    // Start at random position
    int x = rand() % N;
    int y = rand() % N;
    
    // Place 'A' at starting position
    board[x][y] = alphabet[0];
    
    // Try to place letters B through Z
    for (int letter_idx = 1; letter_idx < 26; letter_idx++) {
        bool move_found = false;
        bool tried_directions[4] = {false};
        int directions_tried = 0;
        
        // Keep trying until we find a valid move or exhaust all directions
        while (!move_found && directions_tried < 4) {
            // Choose a random direction we haven't tried yet
            int dir;
            do {
                dir = rand() % 4;
            } while (tried_directions[dir]);
            
            tried_directions[dir] = true;
            directions_tried++;
            
            // Calculate potential new position
            int new_x = x + dx[dir];
            int new_y = y + dy[dir];
            
            // Check if new position is valid
            if (new_x >= 0 && new_x < N && 
                new_y >= 0 && new_y < N && 
                board[new_x][new_y] == '.') {
                
                // Valid move found
                x = new_x;
                y = new_y;
                board[x][y] = alphabet[letter_idx];
                move_found = true;
            }
        }
        
        // If no valid move was found, terminate early
        if (!move_found) {
            break;
        }
    }
    
    // Print the board
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
