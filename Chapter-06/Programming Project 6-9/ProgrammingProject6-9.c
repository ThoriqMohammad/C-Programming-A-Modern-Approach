/* Problem 
* Programming Project 8 in Chapter 2 asked you to write a program that calculates the
* remaining balance on a loan after the first, second, and third monthly payments. Modify the
* program so that it also asks the user to enter the number of payments and then displays the
* balance remaining after each of these payments.
*/

/* Solution */

#include <stdio.h>

int main(void)
{
	float loan_balance, monthly_payment;
	float interest_rate, monthly_interest_rate;
	int i, number_of_payments;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_balance);

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	monthly_interest_rate = interest_rate / (100 * 12);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	printf("Enter the number of payments: ");
	scanf("%d", &number_of_payments);

	printf("\n");

	for(i = 1; i <= number_of_payments; i++)
	{
		loan_balance = loan_balance - monthly_payment + loan_balance * monthly_interest_rate;
		printf("Balance remaining after payment %d: $%.2f\n", i, loan_balance);
	}

    return 0;
}
