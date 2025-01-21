#include <stdio.h>

int isPalindrome(char *);

int main() {
    char str[] = "madam";

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int isPalindrome(char *str) {
    int l = 0, i, j;

    while (str[l] != '\0') {
        l++;
    }

    j = l - 1;
    for (i = 0; i < l / 2; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

