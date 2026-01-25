/* Problem
* Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis-
* plays it in the form yyyymmdd:
*/

#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d %d %d", &a, &b, &c);
    printf("You entered the date %d%.2d%.2d", c, a, b);

    return 0;
}
