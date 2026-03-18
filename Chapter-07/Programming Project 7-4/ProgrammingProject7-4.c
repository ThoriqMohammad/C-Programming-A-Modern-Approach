/* Problem 
* Write a program that translates an alphabetic phone number into numeric form:
* Enter phone number: CALLATT
* 2255288
* (In case you don’t have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF,
* 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains
* nonalphabetic characters (digits or punctuation, for example), leave them unchanged:
* Enter phone number: 1-800-COL-LECT
* 1-800-265-5328
* You may assume that any letters entered by the user are upper case.
*/

/* Solution */

#include <stdio.h>

int main() {
    int ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            // Determine digit based on telephone keypad
            if (ch >= 'A' && ch <= 'C')
                putchar('2');
            else if (ch >= 'D' && ch <= 'F')
                putchar('3');
            else if (ch >= 'G' && ch <= 'I')
                putchar('4');
            else if (ch >= 'J' && ch <= 'L')
                putchar('5');
            else if (ch >= 'M' && ch <= 'O')
                putchar('6');
            else if (ch >= 'P' && ch <= 'S') {
                if (ch == 'Q')
                    putchar('Q');  // Q not mapped
                else
                    putchar('7');
            }
            else if (ch >= 'T' && ch <= 'V')
                putchar('8');
            else if (ch >= 'W' && ch <= 'Y')
                putchar('9');
            else
                putchar(ch); // Z or other unmapped letter
        } else {
            putchar(ch); // non-alphabetic character
        }
    }

    putchar('\n'); // newline after processing
    return 0;
    
}
