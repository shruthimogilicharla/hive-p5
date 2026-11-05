Question: Only Vowels (Recursion).

Given a string, check whether it contains only vowels using recursion.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Output Format

Print "Yes" if the string contains only vowels. Otherwise, print "No".

Constraints

1 <= len(S) <= 100

Example Input
Aieee
Example Output
Yes
Solution in C
#include <stdio.h>
#include <string.h>

int check(char s[], int i) {
    if (s[i] == '\0') {
        return 1;
    }

    if (strchr("aeiouAEIOU", s[i]) == NULL) {
        return 0;
    }

    return check(s, i + 1);
}

int main() {
    char s[101];

    scanf("%100s", s);

    if (check(s, 0)) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}
Explanation
Read the string s.
Define a recursive function check(s, i) to check whether all characters are vowels.
If s[i] == '\0', return 1 because all characters have been checked.
Use strchr() to check whether the current character is a vowel.
If the character is not a vowel, return 0.
Otherwise, recursively call check(s, i+1) to check the next character.
In the main function, print "Yes" if the function returns 1; otherwise, print "No".
Example Dry Run

Input:

Aieee

Character checking:

A → Vowel
i → Vowel
e → Vowel
e → Vowel
e → Vowel

All characters are vowels.

Therefore, the output is Yes.

Time Complexity

O(N) – Each character is checked once.

Space Complexity

O(N) – Recursive function calls use stack memory.
