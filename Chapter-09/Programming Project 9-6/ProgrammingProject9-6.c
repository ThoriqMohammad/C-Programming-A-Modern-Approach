/* Problem
* Write a function that computes the value of the following polynomial:
* 3x^5 + 2x^4 – 5x^3– x^2 + 7x – 6
* Write a program that asks the user to enter a value for x, calls the function to compute the
* value of the polynomial, and then displays the value returned by the function.
*/

/* Solution */

#include <stdio.h>

double polynomial(double x)
{
    return ((((3.0 * x - 2.0) * x - 5.0) * x - 1.0) * x + 7.0) * x - 6.0;
}

int main(void)
{
    double x;

    printf("Enter the value to be computed: ");
    scanf("%lf", &x);

    double result = polynomial(x);

    printf("Polynomial value : %.2f\n", result);

    return 0;
}
