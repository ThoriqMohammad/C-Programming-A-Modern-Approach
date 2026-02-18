/* Problem 
* Write a program that finds the largest and smallest of four integers entered by the user:
* Enter four integers: 21 43 10 35
* Largest: 43
* Smallest: 10
* Use as few if statements as possible. Hint: Four if statements are sufficient.
*/

/* Solution */

#include <stdio.h>

int main() 
{
    
    int max, min, a, b, c, d, max1, max2, min1, min2;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a < b)
    {
        max1 = b;
        min1 = a;
    }
    else
    {
        max1 = a;
        min1 = b;
    }
    
    if (c<d)
    {
        max2 = d;
        min2 = c;
    }
    else 
    {
        max2 = c;
        min2 = d;
    }
    
    if (max1 < max2)
    {
        max = max2;
    }
    else 
    {
        max = max1;
    }
    
    if (min1 < min2)
    {
        min = min1;
    }
    else
    {
        min = min2;
    }
    
    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0; 

}
