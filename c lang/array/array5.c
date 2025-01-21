#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int n = 6;  
    int number, count = 0;

    printf("Enter the number to count its frequency: ");
    scanf("%d", &number);

 
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
   
    printf("The number %d appears %d times.\n", number, count);

    return 0;
}
