/* Problem 
* Using the switch statement, write a program that converts a numerical grade into a letter
* grade:
* Enter numerical grade: 84
* Letter grade: B
* Use the following grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59.
* Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
* into two digits, then use a switch statement to test the ten’s digit.
*/

/* Solution */

#include <stdio.h>

int main() {
    int grade, tens_digit;
    
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    // Check for valid grade range
    if (grade < 0 || grade > 100) {
        printf("Error: Grade must be between 0 and 100\n");
        return 1;
    }
    
    // Get the tens digit
    tens_digit = grade / 10;
    
    printf("Letter grade: ");
    
    // Use switch statement based on the tens digit
    switch (tens_digit) {
        case 10:  // 100
        case 9:   // 90-99
            printf("A\n");
            break;
        case 8:   // 80-89
            printf("B\n");
            break;
        case 7:   // 70-79
            printf("C\n");
            break;
        case 6:   // 60-69
            printf("D\n");
            break;
        default:  // 0-59 (tens digit 0-5)
            printf("F\n");
            break;
    }
    
    return 0;
}
