/* Problem 
* Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an
* array and the arrival times are stored in a second array. (The times are integers, representing
* the number of minutes since midnight.) The program will use a loop to search the array of
* departure times for the one closest to the time entered by the user.
*/

/* Solution */

#include <stdio.h>
#include <stdlib.h>   // for abs()

int main(void) {
    // Departure times in minutes since midnight
    int departures[] = {
        8 * 60,      // 8:00 a.m.
        9 * 60 + 43, // 9:43 a.m.
        11 * 60 + 19,// 11:19 a.m.
        12 * 60 + 47,// 12:47 p.m.
        14 * 60,     // 2:00 p.m.
        15 * 60 + 45,// 3:45 p.m.
        19 * 60,     // 7:00 p.m.
        21 * 60 + 45 // 9:45 p.m.
    };
    
    // Corresponding arrival times in minutes since midnight
    int arrivals[] = {
        10 * 60 + 16, // 10:16 a.m.
        11 * 60 + 52, // 11:52 a.m.
        13 * 60 + 31, // 1:31 p.m.
        15 * 60,      // 3:00 p.m.
        16 * 60 + 8,  // 4:08 p.m.
        17 * 60 + 55, // 5:55 p.m.
        21 * 60 + 20, // 9:20 p.m.
        23 * 60 + 58  // 11:58 p.m.
    };
    
    int num_flights = sizeof(departures) / sizeof(departures[0]);
    int hours, minutes, user_time;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    user_time = hours * 60 + minutes;
    
    // Find the departure time closest to user_time
    int best_index = 0;
    int best_diff = abs(user_time - departures[0]);
    
    for (int i = 1; i < num_flights; i++) {
        int diff = abs(user_time - departures[i]);
        // If equally close, choose the later departure (as in original logic)
        if (diff < best_diff || (diff == best_diff && departures[i] > departures[best_index])) {
            best_diff = diff;
            best_index = i;
        }
    }
    
    // Convert departure and arrival minutes to 12-hour format
    int dep_hours = departures[best_index] / 60;
    int dep_minutes = departures[best_index] % 60;
    int arr_hours = arrivals[best_index] / 60;
    int arr_minutes = arrivals[best_index] % 60;
    
    // Determine a.m./p.m.
    const char *dep_ampm = (dep_hours < 12) ? "a.m." : "p.m.";
    const char *arr_ampm = (arr_hours < 12) ? "a.m." : "p.m.";
    
    // Convert to 12-hour clock (12:00 is 12, not 0)
    int dep_hour_12 = (dep_hours % 12 == 0) ? 12 : dep_hours % 12;
    int arr_hour_12 = (arr_hours % 12 == 0) ? 12 : arr_hours % 12;
    
    printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",
           dep_hour_12, dep_minutes, dep_ampm,
           arr_hour_12, arr_minutes, arr_ampm);
    
    return 0;
}
