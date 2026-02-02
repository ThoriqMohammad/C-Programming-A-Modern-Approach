/* Problem 
* Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
* number without using arithmetic to split the number into digits. Hint: See the upc.c pro-
* gram of Section 4.1.
*/

/* Solution */

#include <stdio.h>
int main (void) 
{
    int a,b,c;
    printf("Enter your three digits number: ");
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("The reversal is: %d%d%d\n", c, b, a);
    
    return 0;
}
