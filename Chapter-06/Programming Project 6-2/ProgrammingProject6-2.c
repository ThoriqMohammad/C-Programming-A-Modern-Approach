/* Problem 
* Write a program that asks the user to enter two integers, then calculates and displays their
* greatest common divisor (GCD):
* Enter two integers: 12 28
* Greatest common divisor: 4
* Hint: The classic algorithm for computing the GCD, known as Euclid’s algorithm, goes as
* follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m con-
* tains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
* and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.
*/

/* Solution */

#include <stdio.h>
int main() 
{
    int a, b, m, n, temp;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    if(a == 0 && b == 0){
        printf("Greatest common divisor: 1");
    }
    else if(a!=0 && b == 0) {
        printf("Greatest common divisor : %d", a);
    }
    else if(a==0 && b != 0) {
        printf("Greatest common divisor : %d", b);
    }
    else if (a>b) {
        m = a; 
        n = b;
        while (n != 0) {
            temp = m % n;
            m = n;
            n = temp;
            }
        printf("Greatest common divisor: %d", m);
    }
    else if (a<b) {
            m = b; 
            n = a;
            while (n != 0) {
                temp = m % n;
                m = n;
                n = temp;
            }
            printf("Greatest common divisor: %d", m);
        }
    else{
        printf("Greatest common divisor : %d", a);
    }
    return 0;
}
