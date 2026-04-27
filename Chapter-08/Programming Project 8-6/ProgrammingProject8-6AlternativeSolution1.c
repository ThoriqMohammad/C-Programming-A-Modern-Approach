/* Problem 
* The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
* messages. Here’s a typical B1FF communiqué:
* H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
* Write a “B1FF filter” that reads a message entered by the user and translates it into B1FF-
* speak:
* Enter message: Hey dude, C is rilly cool
* In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
* Your program should convert the message to upper-case letters, substitute digits for certain
* letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks.
* Hint: Store the original message in an array of characters, then go back through the array,
* translating and printing characters one by one.
*/

/* Solution */

#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch[100];
    int i = 0;

    printf("Enter a message: ");

    /* Read the message into the array */

    while ((ch[i] = getchar()) != '\n' && i < 99){
        i++;
    }

    ch[i] = '\0';   /* Null terminating the string */

    /* Let's go back through the array and translate it */

    for (i = 0; ch[i] != '\0'; i++) {
        switch (toupper(ch[i])) {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;
            default: putchar(toupper(ch[i])); break;
        }
    }
    printf("!!!!!!!!!!!\n");
    
    return 0;
}
