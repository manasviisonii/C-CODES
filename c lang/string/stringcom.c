#include <stdio.h>

int main() {
    char str[] = "RAMAn KUMAr SINGh";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
        i++;
    }

    printf("Converted string: %s\n", str);
    return 0;
}
