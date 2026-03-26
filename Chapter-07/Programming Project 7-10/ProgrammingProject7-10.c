/* Problem 
* Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
* Enter a sentence: And that's the way it is.
* Your sentence contains 6 vowels.
*/

/* Solution */

#include <stdio.h>
int main (void) 
{
    char x;
    int vow = 0;
    
    printf("Enter a sentence: ");
    x = getchar();
    while (x != '\n') {
        if (x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o'||x == 'A' || x == 'I' || x == 'U' || x == 'E' || x == 'O') {
            ++vow;
        }
        x = getchar();
    } 
    
    printf("Your sentence contains %d vowels", vow);

    return 0;
}
