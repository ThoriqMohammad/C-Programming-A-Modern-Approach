/* Problem
* Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
* amount of income tax. When passed an amount of taxable income, the function will return
* the tax due.
*/

#include <stdio.h>

// Function to compute income tax based on taxable income
float compute_tax(float income) {
    if (income <= 750) {
        return income * 0.01;
    }
    else if (income <= 2250) {
        return 7.50 + (income - 750) * 0.02;
    }
    else if (income <= 3750) {
        return 37.50 + (income - 2250) * 0.03;
    }
    else if (income <= 5250) {
        return 82.50 + (income - 3750) * 0.04;
    }
    else if (income <= 7000) {
        return 142.50 + (income - 5250) * 0.05;
    }
    else {
        return 230.00 + (income - 7000) * 0.06;
    }
}

int main(void) {
    float income;

    printf("Enter the income amount: ");
    scanf("%f", &income);

    float tax = compute_tax(income);
    printf("The tax: %.2f\n", tax);

    return 0;
}
