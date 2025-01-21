#include <stdio.h>

int main() {
    char str[] = "raman kumar singh";
    int i = 0;

    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = str[i] - 32;  
        }
        i++;
    }

    printf("The string in proper case is: %s\n", str);
    return 0;
}

