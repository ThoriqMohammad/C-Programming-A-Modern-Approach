/* Problem
* Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-
* hour clock. The input will have the form hours:minutes followed by either A, P, AM, or PM
* (either lower-case or upper-case). White space is allowed (but not required) between the
* numerical time and the AM/PM indicator. Examples of valid input:
* 1:15P
* 1:15PM
* 1:15p
* 1:15pm
* 1:15 P
* 1:15 PM
* 1:15 p
* 1:15 pm
* You may assume that the input has one of these forms; there is no need to test for errors.
*/

/* Solution */

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main(void) {
    int hours, minutes;
    char indicator[4];        // enough for "PM" + null terminator
    int time;                 // minutes since midnight

    printf("Enter a 12-hour time: ");
    // Read time and optional AM/PM indicator (whitespace allowed)
    scanf("%d:%d %s", &hours, &minutes, indicator);

    // Convert to 24‑hour (minutes since midnight)
    if (toupper(indicator[0]) == 'A') {         // AM
        if (hours == 12)
            hours = 0;
    } else {                                    // PM
        if (hours != 12)
            hours += 12;
    }
    time = hours * 60 + minutes;

    // Determine closest departure time (same as original)
    printf("Closest departure time is ");
    if (time < (8 * 60 + (9 * 60 + 43)) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (time < (9 * 60 + 43 + 11 * 60 + 19) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (time < (11 * 60 + 19 + 12 * 60 + 47) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (time < (12 * 60 + 47 + 14 * 60 + 0) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (time < (14 * 60 + 0 + 15 * 60 + 45) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (time < (15 * 60 + 45 + 19 * 60 + 0) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (time < (19 * 60 + 0 + 21 * 60 + 45) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
