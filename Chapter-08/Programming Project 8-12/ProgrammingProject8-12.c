/* Problem
* Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of the letters
* are stored in an array. The array will have 26 elements, corresponding to the 26 letters of the
* alphabet. For example, element 0 of the array will store 1 (because the SCRABBLE value of
* the letter A is 1), element 1 of the array will store 3 (because the SCRABBLE value of the
* letter B is 3), and so forth. As each character of the input word is read, the program will use
* the array to determine the SCRABBLE value of that character. Use an array initializer to set
* up the array.
*/

/* Solution */

#include <ctype.h>   // for toupper()
#include <stdio.h>

int main(void) {
    // Array storing Scrabble values for letters A (index 0) through Z (index 25)
    int points[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,  // A–M
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10   // N–Z
    };

    char word[100];
    int total = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        char ch = toupper(word[i]);               // convert to uppercase
        if (ch >= 'A' && ch <= 'Z') {            // ignore non‑letters
            int index = ch - 'A';                // map 'A'→0, 'B'→1, ...
            total += points[index];
        }
    }

    printf("Scrabble value: %d\n", total);
    return 0;
}

