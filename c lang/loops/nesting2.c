#include<stdio.h>

int main() {
    char ch;
    int num, j, is_prime;

    do {
        printf("\nInput any integer number: ");
        scanf("%d", &num);

        if (num <= 1) {
            printf("NOT A PRIME NUMBER.\n");
        } else {
            is_prime = 1; 
            for (j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    is_prime = 0; 
                    break;
                }
            }

            if (is_prime) {
                printf("It is a prime number.\n");
            } else {
                printf("Not a prime number.\n");
            }
        }

        printf("Do you want to check any other integer for prime or not prime? (y/n): ");
        scanf("%c", &ch);

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
 
