/* Problem 
* Extend the program in Programming Project 1 to handle three-digit numbers.
*/

/* Solution */

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter a three-digit number: ");
    scanf("%d", &a);
    //a = 432
    b = a % 10; //b = 2
    c = a / 10; //c = 43
    d = c % 10; //d = 3
    e = c / 10; // e = 4
    printf("The reversal is: %d%d%d\n", b, d, e);
    return 0;
}
