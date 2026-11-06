Question: Character Frequency (Recursion).

Given a sentence S and a character K, count the occurrences of the given character in the sentence using recursion.

Input Format

The first line of input contains a sentence S.

The second line of input contains a single lowercase character K.

Output Format

Print the count of the given character in the sentence.

Constraints

1 <= len(S) <= 100

'a' <= k <= 'z'

Example Input
Data Structures & Algorithms
s
Example Output
2
Solution in C
#include <stdio.h>
#include <string.h>

int count(char s[], char k, int i) {
    if (s[i] == '\0') {
        return 0;
    }

    if (s[i] == k) {
        return 1 + count(s, k, i + 1);
    }

    return count(s, k, i + 1);
}

int main() {
    char s[101], k;

    scanf("%[^\n]", s);
    scanf(" %c", &k);

    printf("%d", count(s, k, 0));

    return 0;
}
Explanation
Read the sentence s.
Read the character k.
Define a recursive function count(s, k, i) to count character occurrences.
If s[i] == '\0', return 0. This is the base condition.
If the current character s[i] matches k, add 1 to the recursive function result.
Otherwise, skip the current character and call the function for the next index.
Continue until the end of the string.
Print the final count.
Example Dry Run

Input:

Data Structures & Algorithms
s

Character checking:

D → Not matched
a → Not matched
t → Not matched
a → Not matched
S → Not matched
t → Not matched
r → Not matched
u → Not matched
c → Not matched
t → Not matched
u → Not matched
r → Not matched
e → Not matched
s → Matched (1)
& → Not matched
A → Not matched
l → Not matched
g → Not matched
o → Not matched
r → Not matched
i → Not matched
t → Not matched
h → Not matched
m → Not matched

Total occurrences of s = 2 (case-sensitive).

Time Complexity

O(N) – Each character is checked once.

Space Complexity

O(N) – Recursive function calls use stack memory.
