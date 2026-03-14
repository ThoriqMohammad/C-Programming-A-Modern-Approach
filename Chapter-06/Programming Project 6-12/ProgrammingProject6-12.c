/* Problem 
* Modify Programming Project 11 so that the program continues adding terms until the cur-
* rent term becomes less than ε, where ε is a small (floating-point) number entered by the
* user.
*/

/* Solution */

#include <stdio.h>

int main() {
    double epsilon;
    double sum = 1.0;      // start with 1/0! = 1
    double term = 1.0;     // will become 1/i! for i = 1,2,...
    int i = 1;             // next factorial denominator

    // Prompt the user for epsilon
    printf("Enter a small positive number epsilon: ");
    scanf("%lf", &epsilon);

    // Input validation
    if (epsilon <= 0.0) {
        printf("Epsilon must be positive.\n");
        return 1;
    }

    // Keep adding terms while the next term is >= epsilon
    while (1) {
        term /= i;               // term now equals 1/i!
        if (term < epsilon)      // next term is too small – stop
            break;
        sum += term;              // add the term
        i++;                      // move to next denominator
    }

    // Output the approximation and the number of terms used
    printf("Approximation of e after adding terms up to 1/%d! : %.15f\n", i-1, sum);
    printf("Total number of terms added (including the initial 1) = %d\n", i);

    return 0;
}
