/*
* Modify Programming Project 4 from Chapter 7 so that the program labels its output:
* Enter phone number: 1-800-COL-LECT
* In numeric form: 1-800-265-5328
* The program will need to store the phone number (either in its original form or in its
* numeric form) in an array of characters until it can be printed. You may assume that the
* phone number is no more than 15 characters long.
*/

/* Solution */

#include <stdio.h>

int main(void) {
    char original[16];      // to hold the input (max 15 chars + null)
    char numeric[16];       // to hold the converted result
    int i = 0;

    printf("Enter phone number: ");
    if (fgets(original, sizeof(original), stdin) == NULL)
        return 1;

    // Process each character until newline or end of string
    for (int pos = 0; original[pos] != '\n' && original[pos] != '\0'; pos++) {
        char ch = original[pos];
        char converted;

        if (ch >= 'A' && ch <= 'Z') {
            // Map letters to digits according to telephone keypad
            if (ch >= 'A' && ch <= 'C')
                converted = '2';
            else if (ch >= 'D' && ch <= 'F')
                converted = '3';
            else if (ch >= 'G' && ch <= 'I')
                converted = '4';
            else if (ch >= 'J' && ch <= 'L')
                converted = '5';
            else if (ch >= 'M' && ch <= 'O')
                converted = '6';
            else if (ch >= 'P' && ch <= 'S') {
                // Q is not on standard keypad; leave as 'Q'
                if (ch == 'Q')
                    converted = 'Q';
                else
                    converted = '7';
            }
            else if (ch >= 'T' && ch <= 'V')
                converted = '8';
            else if (ch >= 'W' && ch <= 'Y')
                converted = '9';
            else
                converted = ch; // Z or other letter (should not happen)
        } else {
            // Non‑alphabetic characters stay unchanged
            converted = ch;
        }

        numeric[i++] = converted;
    }
    numeric[i] = '\0';  // null‑terminate the result

    printf("In numeric form: %s\n", numeric);

    return 0;
}
