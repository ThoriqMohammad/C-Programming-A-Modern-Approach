/* Problem 
* Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
* number with its digits reversed. Generalize the program so that the number can have one,
* two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
* stopping when it reaches 0.
*/

/* Solution */

#include <stdio.h>

int main() {
    int a, b = 0;
    printf("Enter a positive integer to reverse: ");
    scanf("%d", &a);
    do {
        int c = a % 10;
        a /= 10;
        b = 10*b + c; 
    } while (a != 0);
    printf("The reversed integer is %d\n", b);
    
    return 0;
}
