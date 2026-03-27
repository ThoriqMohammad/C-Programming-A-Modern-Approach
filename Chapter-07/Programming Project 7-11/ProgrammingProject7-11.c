/* Problem 
* Write a program that takes a first name and last name entered by the user and displays the
* last name, a comma, and the first initial, followed by a period:
* Enter a first and last name: Lloyd Fosdick
* Fosdick, L.
* The user’s input may contain extra spaces before the first name, between the first and last
* names, and after the last name.
*/

/* Solution */

#include <stdio.h>

int main(void) 
{
    int ch;
    char initial;

    printf("Enter a first and last name: ");

    // Skip any leading spaces before the first name
    while ((ch = getchar()) == ' ')
        ;

    // First character of the first name is the initial
    initial = ch;

    // Skip the rest of the first name
    while ((ch = getchar()) != ' ' && ch != '\n' && ch != EOF)
        ;

    // Skip spaces between the first and last name
    while ((ch = getchar()) == ' ')
        ;

    // Read and print the last name character by character
    while (ch != ' ' && ch != '\n' && ch != EOF) {
        putchar(ch);
        ch = getchar();
    }

    // Output the comma and the first initial
    printf(", %c.\n", initial);

    return 0;
}
