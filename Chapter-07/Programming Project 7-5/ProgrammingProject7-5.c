/* Problem 
* In the SCRABBLE Crossword Game, players form words using small tiles, each containing
* a letter and a face value. The face value varies from one letter to another, based on the let-
* ter’s rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K,
* 8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values
* of its letters:
* Enter a word: pitfall
* Scrabble value: 12
* Your program should allow any mixture of lower-case and upper-case letters in the word.
* Hint: Use the toupper library function.
*/

/* Solution */

#include <ctype.h>   // for toupper()
#include <stdio.h>

int main(void) {
    // Array of point values for letters A through Z (index 0 = 'A', 25 = 'Z')
    int points[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,  // A-M
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10   // N-Z
    };

    char word[100];   // buffer to hold the input word (assume max 99 chars)
    int total = 0;

    printf("Enter a word: ");
    scanf("%s", word);   // read a single word (no spaces)

    // Loop through each character of the word
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = toupper(word[i]);   // convert to uppercase

        if (ch >= 'A' && ch <= 'Z') { // ensure it's a letter
            int index = ch - 'A';      // map 'A'->0, 'B'->1, ...
            total += points[index];
        }
        // if the character is not a letter, we simply ignore it
    }

    printf("Scrabble value: %d\n", total);
    return 0;
}
