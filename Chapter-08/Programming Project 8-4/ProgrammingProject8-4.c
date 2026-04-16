/* Problem
* Modify the reverse.c program of Section 8.1 to use the expression (int)
* (sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length.
*/

/* Solution */

#include <stdio.h>

#define N  ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
    int i, a[10];
    
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");
    for (i = 0; i < N; i++){
        printf("%d ", a[N-i-1]);
        
    }
    //in the book it uses 
    //for (i = N-1 ; i>= 0; i--){
        // printf(" %d", a[i]);
    //}
    printf("\n");

    return 0;
}
