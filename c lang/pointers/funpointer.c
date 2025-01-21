#include <stdio.h>

float findMax(float *arr, int size) {
    float max;
    max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    float a[] = {3.5, 7.2, 1.8, 9.4, 5.6};
    int size = 5 ;

    float max = findMax(a, size);
    printf("Maximum float value: %.2f\n", max);

    return 0;
}
