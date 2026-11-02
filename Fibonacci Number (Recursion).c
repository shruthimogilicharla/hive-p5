Question: Fibonacci Number (Recursion).

Given a positive integer N, compute the Nth Fibonacci number using recursion.

Input Format

The first and only line of input contains a positive integer N.

Output Format

Print the Nth Fibonacci number.

Constraints

0 <= N <= 20

Example Input
4
Example Output
3
Solution in C
#include <stdio.h>

int fib(int n)
{
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}
Explanation
Read the number n.
Define a recursive function fib(n) to calculate the Fibonacci number.
If n == 0, return 0.
If n == 1, return 1.
Otherwise, return fib(n-1) + fib(n-2).
The function calls itself until it reaches the base conditions.
Print the Nth Fibonacci number.
Example Dry Run

For N = 4:

fib(4) = fib(3) + fib(2)
fib(3) = fib(2) + fib(1)
fib(2) = fib(1) + fib(0)
fib(1) = 1
fib(0) = 0

Fibonacci Series:

0, 1, 1, 2, 3

Therefore, the 4th position (0-based indexing) is 3.

Time Complexity

O(2^N) – Each recursive call generates two more recursive calls in the worst case.

Space Complexity

O(N) – Recursive function calls use stack memory.
