#include <stdio.h>
#include "main.h"

int is_palindrome(char *s, int start, int end) {
    if (start >= end) {
        return 1;  // base case: string is a palindrome
    }
    if (s[start] != s[end]) {
        return 0;  // base case: string is not a palindrome
    }
    return is_palindrome(s, start + 1, end - 1);  // recursive case
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    if (is_palindrome(str, 0, len - 1)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
