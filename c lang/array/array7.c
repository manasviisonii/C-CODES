#include<stdio.h>

int main(){
    int a[] = {2, 4, 5, 7, 8, 3, 1, 7};
    int n = 8;
    int even = 0;
    int odd = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    int evenArray[even], oddArray[odd];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            evenArray[evenIndex++] = a[i];
        } else {
            oddArray[oddIndex++] = a[i];
        }
    }

    printf("Even Subarray: ");
    for (int i = 0; i < even; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    printf("Odd Subarray: ");
    for (int i = 0; i < odd; i++) {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    return 0;
}
