/* Problem 
* Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
* form:
* Enter a 24-hour time: 21:11
* Equivalent 12-hour time: 9:11 PM
* Be careful not to display 12:00 as 0:00.
*/

/* Soution */

#include <stdio.h>

int main() 
{
    int hr, min;
    printf("Enter a 24-hour time (hr:min): ");
    scanf("%d:%d", &hr, &min);
    if (hr == 0) {
        printf("Equivalent 12-hour time: 12 : %.2d", min);
    }
    else if (hr < 12){
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hr, min);
    }
    else if (hr == 12){
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hr, min);
    }
    else {
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hr - 12, min);
    }
  
    return 0;
}
