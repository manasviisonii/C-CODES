#include <stdio.h>

int insertion(int arr[], int n) {
    int i, k, j;
    for (i = 0; i < n; i++) { 
        k = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
    return 0;
}

int main() {
    int arr[] = {12, 11, 3, 5, 6};
    int n = 5;
    int i;

    insertion(arr, n);

    printf("The sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    return 0;
}
