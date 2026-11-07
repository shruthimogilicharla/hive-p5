Question: Floyd Pattern - 1 (Recursion.

Print a right-angled triangle pattern using consecutive integers starting from 1 using recursion.

Input Format

The first and only line of input contains a single integer N, representing the size of the triangle.

Output Format

Print the right-angled triangle pattern.

Constraints

1 <= N <= 50

Example Input
6
Example Output
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
Solution in C
#include <stdio.h>

void floyd(int row, int n, int *num) {
    if (row > n) {
        return;
    }

    for (int i = 1; i <= row; i++) {
        printf("%d ", (*num)++);
    }

    printf("\n");

    floyd(row + 1, n, num);
}

int main() {
    int n, num = 1;
    scanf("%d", &n);

    floyd(1, n, &num);

    return 0;
}
Explanation
Read the number of rows n.
Initialize num = 1 to print consecutive integers starting from 1.
Define a recursive function floyd(row, n, num).
If row > n, stop the recursion. This is the base condition.
Use a loop to print numbers in the current row.
After printing each number, increment num using (*num)++.
Print a newline after completing each row.
Call the function recursively with row + 1 to print the next row.
Continue until all N rows are printed.
Example Dry Run

For N = 4:

Row	Numbers
1	1
2	2 3
3	4 5 6
4	7 8 9 10

Output:

1
2 3
4 5 6
7 8 9 10
Time Complexity

O(N²) – A total of N × (N+1) / 2 numbers are printed.

Space Complexity

O(N) – Recursive function calls use stack memory.
