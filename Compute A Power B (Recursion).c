Question: Compute A Power B (Recursion).

Given two integers A and B, compute A power B recursively without using any inbuilt functions or libraries.

Input Format

The first and only line of input contains two integers A and B.

Output Format

Print A power B.

Constraints

1 <= A <= 100
0 <= B <= 9

Example Input
2 3
Example Output
8
Solution in C
#include <stdio.h>

long long power(int a, int b) {
    if (b == 0) {
        return 1;
    }

    return a * power(a, b - 1);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%lld", power(a, b));

    return 0;
}
Explanation
Read two integers a and b.
Define a recursive function power(a, b).
If b == 0, return 1 because any number raised to power 0 is 1.
Otherwise, return a * power(a, b-1).
The function calls itself until the exponent becomes 0.
Print the final result.
Example Dry Run

For A = 2 and B = 3:

power(2, 3) = 2 × power(2, 2)
power(2, 2) = 2 × power(2, 1)
power(2, 1) = 2 × power(2, 0)
power(2, 0) = 1

Therefore:

2 × 2 × 2 × 1 = 8

Time Complexity

O(B) – The recursive function is called B+1 times.

Space Complexity

O(B) – Recursive function calls use stack memory.
