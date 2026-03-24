/* Problem 
* Write a program that asks the user for a 12-hour time, then displays the time in 24-hour
* form:
* Enter a 12-hour time: 9:11 PM
* Equivalent 24-hour time: 21:11
* See Programming Project 8 for a description of the input format.
*/

/* Solution */

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main(void) {
    int hours, minutes;
    char indicator;   // stores first letter of AM/PM (no array needed)

    printf("Enter a 12-hour time: ");
    // Read hours, minutes, and the first character of the indicator
    // The space before %c skips any whitespace between the time and the indicator
    scanf("%d:%d %c", &hours, &minutes, &indicator);

    // Convert to 24-hour format based on the first character
    if (toupper(indicator) == 'A') {   // AM
        if (hours == 12)
            hours = 0;                 // 12 AM -> 0
    } else {                           // PM (since input is valid)
        if (hours != 12)
            hours += 12;               // 1-11 PM -> 13-23
    }

    // Display the result in 24-hour format
    printf("Equivalent 24-hour time: %02d:%02d\n", hours, minutes);

    return 0;
}
