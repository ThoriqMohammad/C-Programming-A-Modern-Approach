/* Problem 
* The square2.c program of Section 6.3 will fail (usually by printing strange answers) if
* i* i exceeds the maximum int value. Run the program and determine the smallest value
* of n that causes failure. Try changing the type of i to short and running the program
* again. (Don’t forget to update the conversion specifications in the call of printf!) Then
* try long. From these experiments, what can you conclude about the number of bits used to
* store integer types on your machine?
*/

/* square2.c : Printing a Table of Squares Using a for Statement */

#include <stdio.h>

int main (void)
{
    short i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for(i = 1; i < n+1; i++){
        printf("%20hd   %20hd\n\n", i, i * i);
    }

    return 0;
}

/* Solution */

/* This is in my compiler
* When i is of int type, the pioint of failure is somewhere between 200.000 and 300.000. 
* When i is of short type, 100.000 is enough to make it crash.
* For long type, 1.000.000 still works fine.
