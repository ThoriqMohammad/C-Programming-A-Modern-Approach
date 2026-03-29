/* Problem 
* Write a program that evaluates an expression:
* Enter an expression: 1+2.5*3
* Value of expression: 10.5
* The operands in the expression are floating-point numbers; the operators are +, - , *, and /.
* The expression is evaluated from left to right (no operator takes precedence over any other
* operator).
*/

/* Solution */

#include <stdio.h>

int main(void) {
    double result, operand;
    char operator;

    printf("Enter an expression: ");

    scanf("%lf", &result);

    // Peek at the next character; stop if it's newline or EOF
    while (scanf("%c", &operator) == 1) {
        if (operator == '\n')
            break;

        if (scanf("%lf", &operand) != 1)
            break;

        switch (operator) {
            case '+': result += operand; break;
            case '-': result -= operand; break;
            case '*': result *= operand; break;
            case '/': result /= operand; break;
            default:
                printf("Unknown operator: %c\n", operator);
                return 1;
        }
    }

    printf("Value of expression: %.1f\n", result);

    return 0;
}

/* Alternative Solution */

#include <stdio.h>

int main(void) {
    double result, num;
    char op;
    int next_char;

    printf("Enter an expression: ");
    
    // Read the first operand
    scanf("%lf", &result);
    
    // Peek at the next character
    next_char = getchar();
    
    while (next_char != '\n' && next_char != EOF) {
        // The next non-space character should be an operator
        // But we already have the character, so we can use it if it's not space
        if (next_char == ' ') {
            // Skip spaces
            next_char = getchar();
            continue;
        }
        op = next_char;
        // Read the next number
        scanf("%lf", &num);
        
        switch (op) {
            case '+': result += num; break;
            case '-': result -= num; break;
            case '*': result *= num; break;
            case '/': result /= num; break;
        }
        
        // Peek at the next character after the number
        next_char = getchar();
    }
    
    printf("Value of expression: %g\n", result);
    
    return 0;
}
