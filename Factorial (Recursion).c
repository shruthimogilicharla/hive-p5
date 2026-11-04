Question: Factorial (Recursion).

Given a non-negative integer N, print the factorial of N using recursion.

Input Format

The first and only line of input contains an integer N.

Output Format

Print the factorial of N.

Constraints

0 <= N <= 10

Example Input
5
Example Output
120
Solution in C
#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", fact(n));

    return 0;
}
Explanation
Read the number n.
Define a recursive function fact(n) to calculate factorial.
If n is 0 or 1, return 1. This is the base condition.
Otherwise, return n * fact(n-1).
The function calls itself until it reaches the base condition.
Print the factorial using printf().
Example Dry Run

For N = 5:

fact(5) = 5 × fact(4)
fact(4) = 4 × fact(3)
fact(3) = 3 × fact(2)
fact(2) = 2 × fact(1)
fact(1) = 1

Therefore:

5 × 4 × 3 × 2 × 1 = 120

Time Complexity

O(N) – The recursive function is called N times.

Space Complexity

O(N) – Recursive function calls use stack memory.
