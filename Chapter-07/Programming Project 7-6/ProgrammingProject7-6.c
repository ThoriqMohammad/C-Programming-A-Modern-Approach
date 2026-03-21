/* Problem
* Write a program that prints the values of sizeof(int), sizeof(short),
* sizeof(long), sizeof(float), sizeof(double) and sizeof(long dou-
* ble).
*/

/* Solution */

#include <stdio.h>

int main() 
{
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    return 0;
}
