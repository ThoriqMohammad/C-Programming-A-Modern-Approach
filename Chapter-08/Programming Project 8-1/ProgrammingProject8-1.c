/* Problem 
* Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
* were repeated:
* Enter a number: 939577
* Repeated digit(s): 7 9
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

    printf("Repeated digit(s): ");
    for (digit = 0; digit < 10; digit++){
        if (digit_seen[digit] > 1){
            printf("    %d ", digit);
        }
    }
    printf("\n");

    return 0;
}
