/* Problem */
/* Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
 * that amount using the smallest number of $20, $10, $5, and $1 bills:
 * 
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 */

/* Solution */

#include <stdio.h>
int main()
{
    int n, k, m, x, a, b, c;
    printf("Enter the dollar amount: ");
    scanf("%d", &n);
    k = n/20;
    m = n - k * 20;
    x = m/10;
    a = m - x * 10;
    b = a/5;
    c = a - b * 5;
    printf("$20 bills: %d\n", k);
    printf("$10 bills: %d\n", x);
    printf("$5 bills: %d\n", b);
    printf("$1 bills: %d\n", c);
} 
