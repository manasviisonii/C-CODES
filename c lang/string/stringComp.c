#include <stdio.h>

int main() {
    char str1[] = "ram";
    char str2[] = "raman";
    int i = 0, isEqual = 1;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }
    
    if (isEqual && str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
