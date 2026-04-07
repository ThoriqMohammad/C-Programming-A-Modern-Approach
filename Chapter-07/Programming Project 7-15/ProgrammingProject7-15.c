#include <stdio.h>

int main() 
{
    long double a, x, n = 1;
    printf("Enter a positive integer: ");
    scanf("%Lf", &x);
    a = x;
   
    while (x > 1) {
        n = n*x;
        x = x-1;
    }
    printf("Factorial of %.1Lf: %.1Lf", a, n);
}
