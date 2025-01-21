#include <stdio.h>

int main() {
    int arr1[] = {7,11,12,15,8};
    int arr2[] = {22,30,40};
    int n = 5, m = 3;

    int merged_array[8];

    int i;
    for (i = 0; i < n; i++) {
        merged_array[i] = arr1[i];
    }

    for (i = 0; i < m; i++) {
        merged_array[n + i] = arr2[i];
    }

    for (i = 0; i < n + m; i++) {
        printf("%d ", merged_array[i]);
    }

    return 0;
}
