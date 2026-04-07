/* Problem
* Write a program that computes the factorial of a positive integer:
* Enter a positive integer: 6
* Factorial of 6: 720
* (a) Use a short variable to store the value of the factorial. What is the largest value of n
* for which the program correctly prints the factorial of n?
* (b) Repeat part (a), using an int variable instead.
* (c) Repeat part (a), using a long variable instead.
* (d) Repeat part (a), using a long long variable instead (if your compiler supports the
* long long type).
* (e) Repeat part (a), using a float variable instead.
* (f) Repeat part (a), using a double variable instead.
* (g) Repeat part (a), using a long double variable instead.
* In cases (e)–(g), the program will display a close approximation of the factorial, not neces-
* sarily the exact value.
*/

/* Solution */

/* We can write a single program that uses a given type via a typedef.
For the experiments, you would replace fact_t with short, int, long, long long, float, double, or long double.*/

#include <stdio.h>

typedef short fact_t;   // change this for each part (a)..(g)

int main(void) {
    fact_t fact = 1;
    int n, original;

    printf("Enter a positive integer: ");
    scanf("%d", &original);
    n = original;

    while (n > 1) {
        fact = fact * n;
        n--;
    }

    printf("Factorial of %d: ", original);
    // For floating‑point types we can use %f; for integers use %d etc.
    // A simple way: cast to double and print with %.0f (no decimals)
    printf("%.0f\n", (double)fact);
    return 0;
}

/* Results for each data type */

// (a) short
// Typical range: –32 768 … 32 767 (signed 16‑bit).
// Factorials:
// 1! = 1
//
// 2! = 2
// ...
// 7! = 5040
// 8!=40320 → exceeds 32 767.
// Largest  n with correct result: 
// n = 7
// For  n=8, overflow occurs; the printed value is wrong (e.g., 40320 mod 65536 = –25216 on two’s complement).

// (b) int
//Typical range: –2 147 483 648 … 2 147 483 647 (32‑bit).
// Factorials:
// 12!=479001600
// 13!=6227020800 → exceeds 2.147 billion.
// Largest n : n=12.

// (c) long
// On many 32‑bit systems, long is the same as int (32 bits). On 64‑bit Windows, long is also 32 bits. On 64‑bit Linux/macOS, long is 64 bits.
// Assuming a 64‑bit long (signed range ≈ ±9.22×10¹⁸):
// 20!=2 432 902 008 176 640 000 (≈ 2.43×10¹⁸)
// 21!=51 090 942 171 709 440 000 (≈ 5.1×10¹⁹) → exceeds 9.22×10¹⁸.
// Largest n (64‑bit long): n = 20.
// If long is 32‑bit, the answer is the same as int: n = 12.

