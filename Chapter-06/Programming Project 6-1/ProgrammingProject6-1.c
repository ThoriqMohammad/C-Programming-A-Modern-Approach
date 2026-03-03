/* Problem 
* Write a program that finds the largest in a series of numbers entered by the user. The pro-
* gram must prompt the user to enter numbers one by one. When the user enters 0 or a nega-
* tive number, the program must display the largest nonnegative number entered:
* Enter a number: 60
* Enter a number: 38.3
* Enter a number: 4.89
* Enter a number: 100.62
* Enter a number: 75.2295
* Enter a number: 0
*
* The largest number entered was 100.62
* Notice that the numbers aren’t necessarily integers.
* 
*/

/* Solution */

#include <stdio.h>

int main() {
    float max = 0, k;
    printf("Enter a number, 0 to abort: ");
    scanf("%f", &k);
    while (k != 0) {
        if (k > max) {
            max = k;
        }
        scanf("%f", &k);
    }
    printf("The largest number entered by the user is: %.2f", max);

    return 0;
}
