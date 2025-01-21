#include <stdio.h>

int main() {
    int a[] = {7, 10, 15, 30, 12, 25, 33};
    int i, j;
    int r[2];
    int target = 40;
    int flag = 0;
    
    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            if (a[i] + a[j] == target) {
                r[0] = i;
                r[1] = j;
                printf("The indices for the same are %d %d\n", r[0], r[1]);
               flag=1;
            }
        }
    }
    if(flag=0)
    printf("No solution\n");
    
    return 0;
}
