Question: Matrix Row Sum (Recursion).

Given a matrix of size N × M, print the row-wise sum using recursion. Print each row sum on a new line.

Input Format

The first line of input contains N and M, representing the size of the matrix.

The next N lines contain M integers each, representing the matrix elements.

Output Format

Print the row-wise sum of the matrix, separated by a newline.

Constraints

1 <= N, M <= 100
-100 <= ar[i] <= 100

Example Input
2 3
5 -1 3
19 8 -5
Example Output
7
22
Solution in C
#include <stdio.h>

int sum(int a[][100], int row, int col, int m) {
    if (col == m) {
        return 0;
    }

    return a[row][col] + sum(a, row, col + 1, m);
}

void print(int a[][100], int n, int m, int row) {
    if (row == n) {
        return;
    }

    printf("%d\n", sum(a, row, 0, m));

    print(a, n, m, row + 1);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    print(a, n, m, 0);

    return 0;
}
Explanation
Read the number of rows n and columns m.
Read all the matrix elements.
Define a recursive function sum() to calculate the sum of each row.
If col == m, return 0. This is the base condition.
Otherwise, add the current element a[row][col] to the recursive call.
Define another recursive function print() to print the row sums.
If row == n, stop the recursion.
Otherwise, calculate and print the current row sum.
Call print() again for the next row.
Example Dry Run

Input:

2 3
5 -1 3
19 8 -5

Row 1:

5 + (-1) + 3 = 7

Row 2:

19 + 8 + (-5) = 22

Therefore, the output is:

7
22
Time Complexity

O(N × M) – Every matrix element is visited once.

Space Complexity

O(N + M) – Recursive function calls use stack memory.
