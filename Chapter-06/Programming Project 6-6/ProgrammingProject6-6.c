/* Problem 
* Write a program that prompts the user to enter a number n, then prints all even squares
* between 1 and n. For example, if the user enters 100, the program should print the follow-
* ing:
* 4
* 16
* 36
* 64
* 100
*/

/* Solution */

#include <stdio.h>

int main(void)
{
    int i = 1, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i * i < n + 1)
    {
        if ((i % 2) == 0)
        {
            printf("%d\n", i * i);
            
        }
        i++;
    }
   
    return 0;
}
