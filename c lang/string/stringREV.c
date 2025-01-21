#include <stdio.h>

int main() {
    char str[] = "hell";
    int l = 0, i, j;
    char temp;

    i = 0;
    while (str[i] != '\0') {
        l++, i++;
    }
    
    printf("\nThe length of the string is %d\n", l);
    
    j = l - 1;
    for (i = 0; i < l / 2; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    printf("Reversed string: %s\n", str);
    return 0;
}
