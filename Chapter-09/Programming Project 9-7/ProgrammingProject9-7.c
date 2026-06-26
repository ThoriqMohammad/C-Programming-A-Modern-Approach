/* Problem
The power function of Section 9.6 can be made faster by having it calculate x^n in a differ-
ent way. We first notice that if n is a power of 2, then xn can be computed by squaring. For
example, x^4 is the square of x^2, so x^4 can be computed using only two multiplications instead
of three. As it happens, this technique can be used even when n is not a power of 2. If n is
even, we use the formula xn = (x^(n/2))^2. If n is odd, then xn
= x x^(n–1). Write a recursive func-
tion that computes x^n. (The recursion ends when n = 0, in which case the function returns 1.)
To test your function, write a program that asks the user to enter values for x and n, calls
power to compute xn, and then displays the value returned by the function.
*/

/* Solution */

#include <stdio.h>

double exponent(double real, int n);

int main(void)
{
    int exp;
    double real;
    
    
    printf("Enter the real number: ");
    scanf("%lf", &real);
    
    printf("Enter the exponent, positif integer: ");
    scanf("%d", &exp);
    
    printf("The value of the exponent is %.2lf\n", exponent(real, exp));
    
    return 0;
}

double exponent(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    else if (n % 2 == 0)
    {
        double half = exponent(x, n/2);
        return half * half;
    }
    return x * exponent(x, n-1);
}
