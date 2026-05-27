/* Problem
* Write a program that reverses the words in a sentence:
* Enter a sentence: you can cage a swallow can't you?
* Reversal of sentence: you can't swallow a cage can you?
* Hint: Use a loop to read the characters one by one and store them in a one-dimensional
* char array. Have the loop stop at a period, question mark, or exclamation point (the “termi-
* nating character”), which is saved in a separate char variable. Then use a second loop to
* search backward through the array for the beginning of the last word. Print the last word,
* then search backward for the next-to-last word. Repeat until the beginning of the array is
* reached. Finally, print the terminating character.
*/

/* Solution */

#include <stdio.h>
#include <ctype.h>   // not strictly needed but included for safety

int main(void) {
    char sentence[1000];   // array to store the sentence (without terminating punctuation)
    char term;             // terminating character (., ?, or !)
    int pos = 0;           // current position in sentence array
    char ch;

    printf("Enter a sentence: ");

    // Read characters until a terminator (., ?, !) is found
    while ((ch = getchar()) != '\n') {
        if (ch == '.' || ch == '?' || ch == '!') {
            term = ch;      // store the terminating character
            break;          // stop reading
        }
        sentence[pos++] = ch;
    }

    // Now process the sentence backwards to print words in reverse order
    int last = pos - 1;      // index of last character before terminator

    printf("Reversal of sentence: ");

    while (last >= 0) {
        // Find the start of the current word (skip spaces backwards)
        int start = last;
        while (start >= 0 && sentence[start] != ' ') {
            start--;
        }
        // Print the word from start+1 to last
        for (int k = start + 1; k <= last; k++) {
            putchar(sentence[k]);
        }
        // If there is another word to the left, print a space
        if (start > 0) {
            putchar(' ');
        }
        // Move last to the character just before the space we found
        last = start - 1;
    }

    // Finally, print the terminating punctuation and a newline
    printf("%c\n", term);

    return 0;
}
