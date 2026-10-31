Question: Implement Linear Search (Recursion)

Given an array of integers, search for a given key in the array recursively using linear search.

Input Format

The first line of input contains two integers N and K. N is the size of the array and K is the key to search.

The second line contains the elements of the array.

Output Format

If the key is found, print the index of the array. Otherwise, print -1.

Constraints

1 <= N <= 10²
0 <= arr[i] <= 10⁹

Example Input
5 15
-2 -19 8 15 4
Example Output
3
Solution in C
#include <stdio.h>

int search(int a[], int n, int k, int i) {
    if (i == n) {
        return -1;
    }

    if (a[i] == k) {
        return i;
    }

    return search(a, n, k, i + 1);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", search(a, n, k, 0));

    return 0;
}
Explanation
Read the size of the array n and the key k.
Read all the array elements.
Define a recursive function search(a, n, k, i).
If i == n, return -1 because the key is not found.
Check whether the current element a[i] is equal to the key.
If it matches, return the current index i.
Otherwise, call the function again with i + 1.
Print the returned index.
Example Dry Run

Input:

5 15
-2 -19 8 15 4

Array indices:

Index	Element
0	-2
1	-19
2	8
3	15
4	4

Key = 15

search(0) → -2 ≠ 15
search(1) → -19 ≠ 15
search(2) → 8 ≠ 15
search(3) → 15 = 15

Therefore, the output is 3.

Time Complexity

O(N) – In the worst case, all array elements are checked.

Space Complexity

O(N) – Recursive function calls use stack memory.
