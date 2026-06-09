/* Problem 
* Write a program that asks the user to enter a series of integers (which it stores in an array),
* then sorts the integers by calling the function selection_sort. When given an array
* with n elements, selection_sort must do the following:
* 1. Search the array to find the largest element, then move it to the last position in the array.
* 2. Call itself recursively to sort the first n – 1 elements of the array.
*/

/* Solution */

#include <stdio.h>

#define MAX_SIZE 100   // maximum number of integers the user can enter

// Recursive selection sort function
void selection_sort(int arr[], int n) {
    if (n <= 1) {
        return;   // base case: array of size 0 or 1 is already sorted
    }

    // Step 1: Find the largest element in the first n elements
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    // Step 2: Move the largest element to the last position (index n-1)
    int temp = arr[max_index];
    arr[max_index] = arr[n - 1];
    arr[n - 1] = temp;

    // Step 3: Recursively sort the first n-1 elements
    selection_sort(arr, n - 1);
}

int main(void) {
    int n;
    int arr[MAX_SIZE];

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
