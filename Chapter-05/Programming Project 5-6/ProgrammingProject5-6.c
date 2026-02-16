/* Problem 
* Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid. After
* the user enters a UPC, the program will display either VALID or NOT VALID.
*/

/* Solution */

#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, e1, e2, e3, first_sum, second_sum, total;

    printf("Enter the upc code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &e1, &e2, &e3);

    first_sum = d1 + d3 + d5 + d7 + d9 + e2;
    second_sum = d2 + d4 + d6 + d8 + e1;
    total = 3 * first_sum + second_sum;

    int check = 9 - ((total - 1) % 10);

    if (e3 == check)
    {
        printf("VALID\n");
    }
    else
    {
        printf("NOT VALID\n");
    }

    return 0;
}
