/* Problem 
* Write a program that calculates how many digits a number contains:
* Enter a number: 374
* The number 374 has 3 digits
* You may assume that the number has no more than four digits. Hint: Use if statements to
* test the number. For example, if the number is between 0 and 9, it has one digit. If the num
* ber is between 10 and 99, it has two digits.
*/

/* Solution */

#include <stdio.h>
int main () 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (0 <= n && n < 10) {
        printf("The number %d has 1 digit\n", n);
    } 
    else if (9 < n && n < 100 ) {
        printf("The number %d has 2 digits\n", n);
    } 
    else {
        printf("The number %d has 3 digits\n", n);
    }

    return 0;
}
