/* Problem 
* In one state, single residents are subject to the following income tax:
* Income            Amount of tax
* Not over $750     1% of income
* $750–$2,250       $7.50 plus 2% of amount over $750
* $2,250–$3,750     $37.50 plus 3% of amount over $2,250
* $3,750–$5,250     $82.50 plus 4% of amount over $3,750
* $5,250–$7,000     $142.50 plus 5% of amount over $5,250
* Over $7,000       $230.00 plus 6% of amount over $7,000
* Write a program that asks the user to enter the amount of taxable income, then displays the
* tax due.
*/

/* Solution */

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter the income amount: ");
    scanf("%f", &income);

    if (income < 750)
    {
        tax = 1.0 / 100.0 * income;
    }

    else if (income <= 2250)
    {
        tax = 7.50 + 2.0/100.0 * income;
    }

    else if (income <= 3750)
    {
        tax = 37.50 + 3.0/100.0 * income;
    }

    else if (income <= 2250)
    {
        tax = 82.50 + 4.0/100.0 * income;
    }

    else if (income <= 7000)
    {
        tax = 142.50 + 5.0/100.0 * income;
    }

    else 
    {
        tax = 230.00 + 6.0/100.0 * income;
    }

    printf("The tax: %.2f\n", tax);

    return 0;
}
