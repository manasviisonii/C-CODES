#include<stdio.h>

int main() {
    int num, max_digit = 0, digit;
    
    printf("Input any number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        digit = num % 10; 
        if (digit > max_digit) {
            max_digit = digit; 
        }
        num = num / 10; 
    }
    
    printf("The maximum digit in the number is %d", max_digit);
    return 0;
}
