Question: Floyd Pattern - 2 (Recursion)

Print a right-angled triangle pattern using recursion. Each row contains numbers arranged in a specific order as shown in the example.

Input Format

The first and only line of input contains a single integer N, representing the size of the triangle.

Output Format

Print the right-angled triangle pattern.

Constraints

1 <= N <= 50

Example Input
5
Example Output
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
Solution in C
#include <stdio.h>

void print(int row, int n) {
    if (row > n) {
        return;
    }

    int num = row;

    for (int i = 1; i <= row; i++) {
        printf("%d ", num);
        num += n - i;
    }

    printf("\n");

    print(row + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);

    print(1, n);

    return 0;
}
Explanation
Read the number of rows n.
Define a recursive function print(row, n) to print the pattern.
If row > n, stop the recursion. This is the base condition.
Initialize num = row to get the starting number of each row.
Use a loop to print numbers in the current row.
After printing each number, update num using num += n - i.
Print a newline after completing each row.
Call the function recursively with row + 1 to print the next row.
Continue until all N rows are printed.
Example Dry Run

For N = 5:

Row 1: 1

Row 2: 2 → 2 + 4 = 6

Row 3: 3 → 3 + 4 = 7 → 7 + 3 = 10

Row 4: 4 → 4 + 4 = 8 → 8 + 3 = 11 → 11 + 2 = 13

Row 5: 5 → 5 + 4 = 9 → 9 + 3 = 12 → 12 + 2 = 14 → 14 + 1 = 15

Therefore, the output is:

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
Time Complexity

O(N²) – A total of N × (N+1) / 2 numbers are printed.

Space Complexity

O(N) – Recursive function calls use stack memory.
