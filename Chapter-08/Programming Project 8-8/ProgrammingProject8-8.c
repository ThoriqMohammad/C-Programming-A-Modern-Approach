/* Problem 
* Modify Programming Project 7 so that it prompts for five quiz grades for each of 
* five students, then computes the total score and average score for each student, and the
* average score, high score, and low score for each quiz.
*/

#include <stdio.h>

#define SIZE 5

int main() 
{
    int students[SIZE][SIZE];
    int total_score[SIZE] = {0};
    float average;
    
    // Read input and calculate sums
    for (int i = 0; i < SIZE; i++) {
        printf("Enter student %d scores: ", i + 1);
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &students[i][j]);
            total_score[i] += students[i][j];
            
        }
    }
    
    //Print row sums
    //printf("Row totals: ");
    for (int i = 0; i < SIZE; i++) {
        printf("student %d total score :", i+1);
        printf(" %d\n", total_score[i]);
        printf("student %d average score : ", i+1);
        printf("%.2f\n", total_score[i]/(float) SIZE);
    }
    printf("\n");
    
    // Print column sums
    //printf("Column totals: ");
    //for (int i = 0; i < SIZE; i++) {
    //    printf("%d ", col_sums[i]);
    //}
    //printf("\n");

    return 0;
}
