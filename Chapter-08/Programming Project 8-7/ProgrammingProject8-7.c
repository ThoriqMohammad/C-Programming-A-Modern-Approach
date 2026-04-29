/* Problem 
* Write a program that reads a 5 × 5 array of integers and then prints the row sums and the
* column sums:
* Enter row 1: 8 3 9 0 10
* Enter row 2: 3 5 17 1 1
* Enter row 3: 2 8 6 23 1
* Enter row 4: 15 7 3 2 9
* Enter row 5: 6 14 2 6 0
* Row totals: 30 27 40 36 28
* Column totals: 34 37 37 32 21
*/

/* Solution */

#include <stdio.h>

int main() 
{
    int i, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, n17, n18, n19, n20, n21, n22, n23, n24, n25, r1, r2, r3, r4, r5, c1, c2, c3, c4, c5;
    
    printf("Enter row 1: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    printf("Enter row 2: ");
    scanf("%d %d %d %d %d", &n6, &n7, &n8, &n9, &n10);
    printf("Enter row 3: ");
    scanf("%d %d %d %d %d", &n11, &n12, &n13, &n14, &n15);
    printf("Enter row 4: ");
    scanf("%d %d %d %d %d", &n16, &n17, &n18, &n19, &n20);
    printf("Enter row 5: ");
    scanf("%d %d %d %d %d", &n21, &n22, &n23, &n24, &n25);
    r1 = n1 + n2 + n3 + n4 + n5;
    r2 = n6 + n7 + n8 + n9 + n10;
    r3 = n11 + n12 + n13 + n14 + n15;
    r4 = n16 + n17 + n18 + n19 + n20;
    r5 = n21 + n22 + n23 + n24 + n25;
    c1 = n1 + n6 + n11 + n16 + n21;
    c2 = n2 + n7 + n12 + n17 + n22;
    c3 = n3 + n8 + n13 + n18 + n23;
    c4 = n4 + n9 + n14 + n19 + n24;
    c5 = n5 + n10 + n15 + n20 + n25;
    printf("Row totals: %d %d %d %d %d\n", r1, r2, r3, r4, r5);
    printf("Column totals : %d %d %d %d %d\n", c1, c2, c3, c4, c5);

    return 0;
}
