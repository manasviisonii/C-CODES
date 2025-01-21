#include <stdio.h>

void xstrcpy(char *, char *);

int main() {
    char str1[20] = "RAMANUJ";
    char str2[20];

    xstrcpy(str1, str2);
    printf("\nCopied string is: %s\n", str2);

    return 0;
}

void xstrcpy(char *s1, char *s2) {
    while (*s1 != '\0') {
        *s2 = *s1;
        s1++;
        s2++;
    }
    *s2 = '\0';
}



