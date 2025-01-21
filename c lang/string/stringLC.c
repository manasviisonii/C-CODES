#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "RAMAN KUMAR SINGH";
    int i;
    int l;
    
    l = strlen(str);
    
    for (i = 0; i < l; i++) {
        if (str[i] != ' ' && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  
        }
    }
    
    printf("The string in lowercase is: %s\n", str);
    return 0;
}
