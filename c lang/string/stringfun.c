#include <stdio.h>

int xstrlen(char *); 

int main() {
    char str[] = "RAMAN";  
    int l;

    l = xstrlen(str);
    printf("Length = %d\n", l);

    return 0;
}

// Correct function definition
int xstrlen(char *s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}
