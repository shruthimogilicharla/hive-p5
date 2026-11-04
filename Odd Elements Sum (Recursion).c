Question: Odd Elements Sum (Recursion)

Print the sum of all odd elements in an array using recursion.

Input Format

The first line of input contains N, the size of the array. The second line contains N array elements.

Output Format

Print the sum of all odd elements of the given array.

Constraints

1 <= N <= 10³
-10⁶ <= ar[i] <= 10⁶

Example Input
5
-6 9 -8 4 -3
Example Output
6
Solution in C
#include <stdio.h>

int oddsum(int a[], int n) {
    if (n == 0) {
        return 0;
    }

    if (a[n - 1] % 2 != 0) {
        return a[n - 1] + oddsum(a, n - 1);
    }
    else {
        return oddsum(a, n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", oddsum(a, n));

    return 0;
}
Explanation
Read the size of the array n.
Read all the array elements.
Define a recursive function oddsum(a, n) to calculate the sum of odd elements.
If n == 0, return 0. This is the base condition.
Check whether the last element a[n-1] is odd using a[n-1] % 2 != 0.
If it is odd, add it to the recursive function result.
Otherwise, skip the element and call the function for the remaining elements.
Print the final sum.
Example Dry Run

Input:

5
-6 9 -8 4 -3

Odd elements are:

9 and -3

Sum = 9 + (-3) = 6

Time Complexity

O(N) – Each array element is checked once.

Space Complexity

O(N) – Recursive function calls use stack memory.
