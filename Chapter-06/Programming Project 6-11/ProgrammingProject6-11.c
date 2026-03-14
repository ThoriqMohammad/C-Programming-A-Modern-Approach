/* Problem 
* The value of the mathematical constant e can be expressed as an infinite series:
* e = 1 + 1/1! + 1/2! + 1/3! + …
* Write a program that approximates e by computing the value of
* 1 + 1/1! + 1/2! + 1/3! + … + 1/n!
* where n is an integer entered by the user.
*/

/* Solution */

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double term = 1.0;   // represents 1/0! = 1

    // Prompt the user for an integer n
    printf("Enter a non‑negative integer n: ");
    scanf("%d", &n);

    // Optional input validation
    if (n < 0) {
        printf("n must be non‑negative.\n");
        return 1;
    }

    // Start with the first term (i = 0)
    sum = term;

    // Compute the remaining terms 1/1! + 1/2! + ... + 1/n!
    for (i = 1; i <= n; i++) {
        term /= i;        // term now equals 1/i!
        sum += term;
    }

    // Print the result with sufficient precision
    printf("Approximation of e using n = %d is: %.15f\n", n, sum);

    return 0;
}
