Question: Matrix Column Sum (Recursion)

Given a matrix of size N × M, print the column-wise sum using recursion. Print each column sum on a new line.

Input Format

The first line of input contains N and M, representing the size of the matrix.

The next N lines contain M integers each, representing the matrix elements.

Output Format

Print the column-wise sum of the matrix, separated by a newline.

Constraints

1 <= N, M <= 100
-100 <= ar[i] <= 100

Example Input
2 2
5 -1
19 8
Example Output
24
7
Solution in C
#include <stdio.h>

int sum(int a[][100], int row, int col, int n) {
    if (row == n) {
        return 0;
    }

    return a[row][col] + sum(a, row + 1, col, n);
}

void print(int a[][100], int n, int m, int col) {
    if (col == m) {
        return;
    }

    printf("%d\n", sum(a, 0, col, n));

    print(a, n, m, col + 1);
}

int main() {
    int n, m, a[100][100];

    scanf("%d %d", &n, &m);

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
Define a recursive function sum() to calculate the sum of each column.
If row == n, return 0. This is the base condition.
Otherwise, add the current element a[row][col] to the recursive call.
Define another recursive function print() to print the column sums.
If col == m, stop the recursion.
Otherwise, calculate and print the current column sum.
Call print() again for the next column.
Example Dry Run

Input:

2 2
5 -1
19 8

Column 1:

5 + 19 = 24

Column 2:

(-1) + 8 = 7

Therefore, the output is:

24
7
Time Complexity

O(N × M) – Every matrix element is visited once.

Space Complexity

O(N + M) – Recursive function calls use stack memory.
