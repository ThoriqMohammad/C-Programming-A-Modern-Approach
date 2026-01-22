/* Problem : 
* Modify the program of Programming Project 5 so that the polynomial is evaluated using the
* following formula:
* ((((3x + 2)x – 5)x – 1)x + 7)x – 6
* Note that the modified program performs fewer multiplications. This technique for evaluat-
* ing polynomials is known as Horner’s Rule.
*/

/* Solution */

#include <stdio.h>
int main() 
{
    float x, y1, y2, y3, y4, y5;
    printf("Enter a value: ");
    scanf("%f", &x);
    y1 = 3.0f * x + 2.0;
    y2 = y1 * x - 5.0f;
    y3 = y2 * x - 1.0f;
    y4 = y3 * x + 7.0f;
    y5 = y4 * x - 6.0f;
    
    printf("%f\n", y5);

  return 0;
}
