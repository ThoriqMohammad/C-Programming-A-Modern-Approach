/* Problem 
* Write a program that calculates the average word length for a sentence:
* Enter a sentence: It was deja vu all over again.
* Average word length: 3.4
* For simplicity, your program should consider a punctuation mark to be part of the word to
* which it is attached. Display the average word length to one decimal place.
*/

/* Solution */

#include <stdio.h>

int main (void) 
{
    char x;
    int len = 0, num_sp = 1;
    float avg;
    printf("Enter a sentence: ");
    x = getchar();
    while (x != '\n') {
        if (x != ' ') {
            len++;
            x = getchar();
        } else {
            num_sp++;
            x = getchar();
        }
    }
    avg = (float) len / (float) num_sp;
    printf("%d\n", len);
    printf("%d\n", num_sp);
    printf("Average word length: %.1f", avg);

    return 0;
}
