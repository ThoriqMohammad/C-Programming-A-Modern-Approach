/* Problem 
* Write a program that reads an integer entered by the user and displays it in octal (base 8):
* Enter a number between 0 and 32767: 1953
* In octal, your number is: 03641
* The output should be displayed using five digits, even if fewer digits are sufficient. Hint: To
* convert the number to octal, first divide it by 8; the remainder is the last digit of the octal
* number (1, in this case). Then divide the original number by 8 and repeat the process to
* arrive at the next-to-last digit. (printf is capable of displaying numbers in base 8, as we’ll
* see in Chapter 7, so there’s actually an easier way to write this program.)
*/

/* Solution */

#include <stdio.h>

int main() 
{
    int n, a0, a1, a2, a3, a4;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    //Later, we can also use this: printf("%o\n", n);
    a0 = n % 8;
    n /= 8;
    a1 = n % 8;
    n /= 8;
    a2 = n % 8;
    n /= 8;
    a3 = n % 8;
    n /= 8;
    a4 = n % 8;
    n /= 8;
    
    printf("%d%d%d%d%d\n", a4, a3, a2, a1, a0);

    return 0;
}
