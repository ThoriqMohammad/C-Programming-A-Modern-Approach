/* Problem 
* Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
* terms:
* Enter a fraction: 6/12
* In lowest terms: 1/2
* Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
* denominator. Then divide both the numerator and denominator by the GCD.
*/

/* Solution */

#include <stdio.h>

int main(void)
{
    int numerator, denumerator, gcd, remainder, n, d;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denumerator);

    if (denumerator < 0)
    {
        numerator = -numerator;
        denumerator = -denumerator;

    }

    if (numerator < 0) 
    {
        n = -numerator;
    } 
    else 
    {
        n = numerator;
    }

    d = denumerator;

    while (d != 0)
        {
            remainder = n % d;
            n = d;
            d = remainder;
        }

        gcd = n;

        numerator /= gcd;
        denumerator /= gcd;

        printf("In lowest term: %d/%d\n", numerator, denumerator);

    return 0;
}
