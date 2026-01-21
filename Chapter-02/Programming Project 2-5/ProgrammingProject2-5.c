/* Problem : 
* Write a program that asks the user to enter a value for x and then displays the value of the
* following polynomial:
* 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6
* Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself
* repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)
*/

/* Solution */

#include <stdio.h>
int main() 
{
    float x, y;
    printf("Enter a value: ");
    scanf("%f", &x);
    y = 3.0f * x * x * x * x * x + 2.0f * x * x * x * x - 5.0f * x * x * x  - x * x + 7.0f * x  - 6.0f;
    printf("%f\n", y);

    return 0;
}
