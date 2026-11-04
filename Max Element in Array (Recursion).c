Question: Max Element in Array (Recursion).

Find the maximum element from the given array of integers using recursion.

Input Format

The first line of input contains N, the size of the array. The second line contains N elements of the array.

Output Format

Print the maximum element of the given array.

Constraints

1 <= N <= 10³
-10⁹ <= ar[i] <= 10⁹

Example Input
5
-2 -19 8 15 4
Example Output
15
Solution in C
#include <stdio.h>

int max(int a[], int n) {
    if (n == 1) {
        return a[0];
    }

    int m = max(a, n - 1);

    if (a[n - 1] > m) {
        return a[n - 1];
    }
    else {
        return m;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", max(a, n));

    return 0;
}
Explanation
Read the size of the array n.
Read all the array elements.
Define a recursive function max(a, n) to find the maximum element.
If n == 1, return the first element. This is the base condition.
Otherwise, recursively find the maximum element in the first n-1 elements.
Compare the last element a[n-1] with the maximum value obtained.
Return the larger element.
Print the maximum element.
Example Dry Run

Input:

5
-2 -19 8 15 4
max(-2) = -2
Compare -19 with -2 → -2
Compare 8 with -2 → 8
Compare 15 with 8 → 15
Compare 4 with 15 → 15

Therefore, the maximum element is 15.

Time Complexity

O(N) – Each array element is checked once.

Space Complexity

O(N) – Recursive function calls use stack memory.
