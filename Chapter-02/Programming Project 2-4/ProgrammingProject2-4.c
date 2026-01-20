/* Problem : 
* Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:*/

/* Solution */

#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the dollar amount: ");
    scanf("%f", &x);
    y = 5.00 * x / 100.00;
    printf("With tax added: %.2f", x+y);

    return 0;
} 