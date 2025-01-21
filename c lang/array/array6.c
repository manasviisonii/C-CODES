#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int n = 8;
    int posCount = 0, negCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) posCount++;
        else if (arr[i] < 0) negCount++;
    }

    int posArray[posCount], negArray[negCount];
    int posIndex = 0, negIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
        {
        posArray[posIndex] = arr[i];
        posIndex++;
        }
        else if (arr[i] < 0)
        {
        negArray[negIndex] = arr[i];
        negIndex++;
        }
    }

    printf("Positive Subarray: ");
    for (int i = 0; i < posCount; i++) {
        printf("%d ", posArray[i]);
    }
    printf("\n");

    printf("Negative Subarray: ");
    for (int i = 0; i < negCount; i++) {
        printf("%d ", negArray[i]);
    }
    printf("\n");

    return 0;
}
 