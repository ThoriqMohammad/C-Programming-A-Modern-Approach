/* Problem 
* Programming Project 9 in Chapter 5 asked you to write a program that determines which of
* two dates comes earlier on the calendar. Generalize the program so that the user may enter
* any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
* Enter a date (mm/dd/yy): 3/6/08
* Enter a date (mm/dd/yy): 5/17/07
* Enter a date (mm/dd/yy): 6/3/07
* Enter a date (mm/dd/yy): 0/0/0
* 5/17/07 is the earliest date
*/

/* Solution */

#include <stdio.h>

int main(void)
{
	int input_mm, input_dd, input_yy;
	int earliest_mm, earliest_dd, earliest_yy;

	

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &earliest_mm, &earliest_dd, &earliest_yy);

	do
	{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d /%d /%d", &input_mm, &input_dd, &input_yy);

		
		if(input_mm == 0 && input_dd == 0 && input_yy == 0)
			break;

		if((input_yy < earliest_yy) ||
		    (input_yy == earliest_yy && input_mm < earliest_mm) ||
		    (input_yy == earliest_yy && input_mm == earliest_mm && input_dd < earliest_dd))
		{
			earliest_yy = input_yy;
			earliest_mm = input_mm;
			earliest_dd = input_dd;
		}

	} while(1);

	printf("%d/%d/%02d is the earliest date\n", earliest_mm, earliest_dd, earliest_yy);

	return 0;
}
