/* Problem 
Modify the stack example of Section 10.2 so that it stores characters instead of integers.
Next, add a main function that asks the user to enter a series of parentheses and/or braces,
then indicates whether or not they’re properly nested:
Enter parentheses and/or braces: ((){}{()})
Parentheses/braces are nested properly
Hint: As the program reads characters, have it push each left parenthesis or left brace. When
it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a
matching parenthesis or brace. (If not, the parentheses/braces aren’t nested properly.) When
the program reads the new-line character, have it check whether the stack is empty; if so, the
parentheses/braces are matched. If the stack isn’t empty (or if stack_underflow is ever called), the parentheses/braces aren’t matched. If stack_overflow is called, have the
program print the message Stack overflow and terminate immediately.
*/

/* Solution */

/* This implementation creates a macro named STACK_SIZE, which is the array size */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int top = 0;
// int contents[STACK_SIZE];
char contents[STACK_SIZE];

void stack_underflow(void)
{
    printf("Stack underflow!\n");

    exit(EXIT_FAILURE);
}

void stack_overflow(void)
{
    printf("Stack overflow!\n");

    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

//void push(int i)
void push(char ch)
{
    if (is_full())
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = ch;
    }
}

//int pop(void)
char pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }
    else 
    {
        return contents[--top];
    }
}

int main(void)
{
    char ch, popped;
    bool valid = true;

    printf("Enter parentheses and/or braces: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == '{' || ch == '(')
        {
            push(ch);
        }
        else if (ch == '}')
        {
            popped = pop();
            if (popped != '{')
            {
                valid = false;
                break;
            }
        }
        else if (ch == ')')
        {
            popped = pop();
            if (popped != '(')
            {
                valid = false;
                break;
            }
        }
    }

    if (valid && is_empty())
    {
        printf("Parentheses/braces are nested properly.\n");
    }
    else
    {
        printf("Parentheses/braces are not nested properly.\n");
    }

return 0;

}

/* Alternative Solution */

// This alternative version utilize VLA concept in C99. The STACK_SIZE is inputted by the user.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int top = 0;

void stack_underflow(void)
{
    printf("Stack underflow!\n");

    exit(EXIT_FAILURE);
}

void stack_overflow(void)
{
    printf("Stack overflow!\n");

    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(int STACK_SIZE)
{
    return top == STACK_SIZE;
}

//void push(int i)
void push(char contents[], int STACK_SIZE, char ch)
{
    if (is_full(STACK_SIZE))
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = ch;
    }
}

//int pop(void)
char pop(char contents[])
{
    if (is_empty())
    {
        stack_underflow();
    }
    else 
    {
        return contents[--top];
    }
}

int main(void)
{
    int STACK_SIZE;
    char ch; /* char popped; */
    bool valid = true;

    printf("Enter stack size: ");
    scanf("%d", &STACK_SIZE);

    char contents[STACK_SIZE];
    top = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        printf("Enter parentheses and/or braces: ");
    }

    while ((ch = getchar()) != '\n')
    {
        if (ch == '{' || ch == '(')
        {
            push(contents, STACK_SIZE, ch);
        }
        else if (ch == '}')
        {
            char popped = pop(contents);
            if (popped != '{')
            {
                valid = false;
                break;
            }
        }
        else if (ch == ')')
        {
            char popped = pop(contents);
            if (popped != '(')
            {
                valid = false;
                break;
            }
        }
    }

    if (valid && is_empty())
    {
        printf("Parentheses/braces are nested properly.\n");
    }
    else
    {
        printf("Parentheses/braces are not nested properly.\n");
    }

return 0;

}
