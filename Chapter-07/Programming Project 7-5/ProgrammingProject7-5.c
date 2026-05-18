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
    char ch;
    int total = 0;

    printf("Enter a word: ");

    // Read characters one by one until newline
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);   // convert to uppercase

        // Determine the Scrabble value of the letter
        switch (ch) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                total += 1;
                break;
            case 'D': case 'G':
                total += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                total += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                total += 4;
                break;
            case 'K':
                total += 5;
                break;
            case 'J': case 'X':
                total += 8;
                break;
            case 'Q': case 'Z':
                total += 10;
                break;
            // Ignore any non‑letter characters (spaces, punctuation, etc.)
            default:
                break;
        }
    }

    printf("Scrabble value: %d\n", total);
    return 0;
}
