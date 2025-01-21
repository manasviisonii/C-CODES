#include<stdio.h>

int main() {
    int num, rev = 0, rm;
    
    printf("Input any number: ");
    scanf("%d", &num);
    
    int original_num = num; 
    
    while (num > 0) {
        rm = num % 10; 
        rev = rev * 10 + rm; 
        num = num / 10; 
    }
    
    printf("The reverse of the number is %d", rev);
    return 0;
}
