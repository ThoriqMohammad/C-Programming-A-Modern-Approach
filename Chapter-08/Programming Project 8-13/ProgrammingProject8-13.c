/* Problem 
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
The program will need to store the last name (but not the first name) in an array of characters
until it can be printed. You may assume that the last name is no more than 20 characters long.
*/

/* Solution */

#include <stdio.h>

int main(void) 
{
    int ch;
    char initial;
    char last_name[21];  // Max 20 characters + null terminator
    int i = 0;

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

    // Read the last name into an array
    while (ch != ' ' && ch != '\n' && ch != EOF) {
        if (i < 20) {
            last_name[i++] = ch;
        }
        ch = getchar();
    }
    last_name[i] = '\0';  // Null-terminate the string

    // Output the labeled result
    printf("You entered the name: %s, %c.\n", last_name, initial);

    return 0;
}
