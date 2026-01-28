/* Problem 
* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
* xxxx and then displays the number in the form xxx.xxx.xxx:
*
* Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
* You entered 404.817.6900
*/

/* Solution */

#include <stdio.h>

int main() 
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter a Phone Number ((xxx) xxx-xxxx): ");
    //scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    scanf("(%1d %1d %1d) %1d %1d %1d - %1d %1d %1d %1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    printf("You entered %1d%1d%1d.%1d%1d%1d.%1d%1d%1d%1d\n", a, b, c, d, e, f, g, h, i, j);
    
    return 0;
}
