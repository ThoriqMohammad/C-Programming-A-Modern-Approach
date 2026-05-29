/* Problem 
One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Cae-
sar. It involves replacing each letter in a message with another letter that is a fixed number of
positions later in the alphabet. (If the replacement would go past the letter Z, the cipher
“wraps around” to the beginning of the alphabet. For example, if each letter is replaced by
the letter two positions after it, then Y would be replaced by A, and Z would be replaced by
B.) Write a program that encrypts a message using a Caesar cipher. The user will enter the
message to be encrypted and the shift amount (the number of positions by which letters
should be shifted):
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdnh pb gdb.
Notice that the program can decrypt a message if the user enters 26 minus the original key:
Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day.
You may assume that the message does not exceed 80 characters. Characters other than let-
ters should be left unchanged. Lower-case letters remain lower-case when encrypted, and
upper-case letters remain upper-case. Hint: To handle the wrap-around problem, use the
expression ((ch - 'A') + n) % 26 + 'A' to calculate the encrypted version of an upper-
case letter, where ch stores the letter and n stores the shift amount. (You’ll need a similar
expression for lower-case letters.)
*/

/* Solution */

#include <stdio.h>
#include <ctype.h>   // for isalpha() but we'll do manual check

int main(void) {
    char message[81];      // store message (max 80 chars + null terminator)
    int shift, i = 0;
    char ch;

    printf("Enter message to be encrypted: ");
    // Read the entire line including spaces until newline
    while ((ch = getchar()) != '\n' && i < 80) {
        message[i++] = ch;
    }
    message[i] = '\0';     // null terminate the string

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    // Process each character
    for (i = 0; message[i] != '\0'; i++) {
        ch = message[i];
        if (ch >= 'A' && ch <= 'Z') {
            // Uppercase letter
            ch = ((ch - 'A') + shift) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            // Lowercase letter
            ch = ((ch - 'a') + shift) % 26 + 'a';
        }
        // Non‑letters remain unchanged
        putchar(ch);
    }
    printf("\n");

    return 0;
}
