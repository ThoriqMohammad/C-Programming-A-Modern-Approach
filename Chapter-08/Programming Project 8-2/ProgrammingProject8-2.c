/* Problem
* Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
* many times each digit appears in the number:
* Enter a number: 41271092
* Digit: 0 1 2 3 4 5 6 7 8 9
* Occurrences: 1 2 2 0 1 0 0 1 0 1
*/

/* Solution */

#include <stdbool.h>  /*C99 only*/
#include <stdio.h>

int main (void)
{
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Digit:      ");
    for (digit = 0; digit < 10; digit++){
        printf("%d\t", digit);
    }
    printf("\n");
    printf("Occurences: ");
    for (digit = 0; digit < 10; digit++){
        printf("%d\t", digit_seen[digit]);
    }
    printf("\n");

    return 0;
}
