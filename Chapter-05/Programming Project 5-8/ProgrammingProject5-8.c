/* Problem 
* The following table shows the daily flights from one city to another:
* Departure time Arrival time
*       8:00 a.m. 10:16 a.m.
*       9:43 a.m. 11:52 a.m.
*       11:19 a.m. 1:31 p.m.
*       12:47 p.m. 3:00 p.m.
*       2:00 p.m. 4:08 p.m.
*       3:45 p.m. 5:55 p.m.
*       7:00 p.m. 9:20 p.m.
*       9:45 p.m. 11:58 p.m.
* Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
* hour clock). The program then displays the departure and arrival times for the flight whose
* departure time is closest to that entered by the user:
* Enter a 24-hour time: 13:15
* Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
* Hint: Convert the input into a time expressed in minutes since midnight, and compare it to
* the departure times, also expressed in minutes since midnight. For example, 13:15 is 13 ×
* 60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since
* midnight) than to any of the other departure times.
*/

/* Solution */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int hours, minutes, time;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    
    time = hours * 60 + minutes;
    
    printf("Closest departure time is ");
    
    if (time < (8 * 60 + (9 * 60 + 43)) / 2) {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (time < (9 * 60 + 43 + 11 * 60 + 19) / 2) {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (time < (11 * 60 + 19 + 12 * 60 + 47) / 2) {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (time < (12 * 60 + 47 + 14 * 60 + 0) / 2) {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (time < (14 * 60 + 0 + 15 * 60 + 45) / 2) {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (time < (15 * 60 + 45 + 19 * 60 + 0) / 2) {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (time < (19 * 60 + 0 + 21 * 60 + 45) / 2) {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }
    
    return 0;
}
