/* Problem
* Write a program that prompts the user to enter two dates and then indicates which date
* comes earlier on the calendar:
* Enter first date (mm/dd/yy): 3/6/08
* Enter second date (mm/dd/yy): 5/17/07
* 5/17/07 is earlier than 3/6/08
*/

/* Solution */

#include <stdio.h>

int main() 
{
    int month1, day1, year1;
    int month2, day2, year2;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    
    // Convert to a sortable number: yyyymmdd
    int date1 = year1 * 10000 + month1 * 100 + day1;
    int date2 = year2 * 10000 + month2 * 100 + day2;
    
    if (date1 < date2) {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (date1 > date2) {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
    }
    else {
        printf("Both dates are the same!\n");
    }
    
    return 0;
}
