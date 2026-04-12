/* Problem
* Modify the repdigit.c program of Section 8.1 so that the user can enter more than one
* number to be tested for repeated digits. The program should terminate when the user enters
* a number that’s less than or equal to 0.
*/

/* Solution */

#include <stdbool.h>  /*C99 only*/
#include <stdio.h>

int main (void)
{
    int digit_seen[10] = {0};
    int digit;
    long m, n;

    printf("Enter a number: ");
    scanf("%ld", &m);
    while (m > 0){
        n = m;
        while (n > 0){
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
        }
        printf("Repeated digit(s): ");
        for (digit = 0; digit < 10; digit++){
            if (digit_seen[digit] > 1){
                printf(" %d ", digit);
            }
        }
        printf("\n");
        
        for (int k = 0; k < 10; k++){
            digit_seen[k] = 0;
        }
        
        printf("Enter a number: ");
        scanf("%ld", &m);
    }
    

    return 0;
}
