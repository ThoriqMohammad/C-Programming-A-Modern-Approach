/* Problem 
* Rearrange the square3.c program so that the for loop initializes i, tests i, and incre-
* ments i. Don’t rewrite the program; in particular, don’t use any multiplications.
*/

/* Solution */

// The original square3.c is as follow.

/* Prints a table of squares using an odd method */
#include <stdio.h>
int main(void)
{
    int i, n, odd, square;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2) 
    {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
    
    return 0;
}

// To obtain the desired table using for loop that initialize i, test i and increment i, here's the desired program

#include <stdio.h>
int main(void)
{
    int i, n, odd, square;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    odd = 3;
    
    for (i = 1, square = 1; i <= n; odd += 2, ++i) 
    {
        printf("%10d%10d\n", i, square);
        
        square += odd
    }
    square += odd;
    
    return 0;
}
