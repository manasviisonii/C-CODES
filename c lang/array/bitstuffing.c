#include <stdio.h>

int main() {
    int data[100], delimiter[100], stuffed[200], destuffed[100];
    int n, d_len, stuffed_len = 0, destuffed_len = 0;
    int count = 0, i, j;

    // Input data array
    printf("Enter the number of bits in data: ");
    scanf("%d", &n);
    printf("Enter the data bits (0s and 1s):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    // Input delimiter array
    printf("Enter the number of bits in the delimiter: ");
    scanf("%d", &d_len);
    printf("Enter the delimiter bits (0s and 1s):\n");
    for (i = 0; i < d_len; i++) {
        scanf("%d", &delimiter[i]);
    }

    // Calculate the number of 1s in the delimiter
    int ones_in_delimiter = 0;
    for (i = 0; i < d_len; i++) {
        if (delimiter[i] == 1) {
            ones_in_delimiter++;
        }
    }

    // Initialize the stuffed array with maximum possible size (2x the data size)
    int max_stuffed_size = 2 * n;

    // Bit Stuffing
    j = 0;
    count = 0;
    for (i = 0; i < n; i++) {
        stuffed[j++] = data[i];

        if (data[i] == 1) {
            count++;
            if (count == ones_in_delimiter - 1) { // Stuff a 0 after (ones_in_delimiter - 1) consecutive 1s
                if (j < max_stuffed_size) { // Ensure within bounds
                    stuffed[j++] = 0;
                }
                count = 0; // Reset the counter
            }
        } else {
            count = 0; // Reset the counter if 0 is encountered
        }
    }
    stuffed_len = j;

    // Print stuffed array
    printf("Stuffed array: ");
    for (i = 0; i < stuffed_len; i++) {
        printf("%d", stuffed[i]);
    }
    printf("\n");

    // Bit De-stuffing
    j = 0;
    count = 0;
    for (i = 0; i < stuffed_len; i++) {
        if (stuffed[i] == 1) {
            count++;
        } else {
            count = 0;
        }

        destuffed[j++] = stuffed[i];

        // Skip the stuffed 0 after (ones_in_delimiter - 1) consecutive 1s
        if (count == ones_in_delimiter - 1 && stuffed[i + 1] == 0) {
            i++; // Skip the stuffed 0
            count = 0; // Reset the counter
        }
    }
    destuffed_len = j;

    // Print de-stuffed array
    printf("De-stuffed array: ");
    for (i = 0; i < destuffed_len; i++) {
        printf("%d", destuffed[i]);
    }
    printf("\n");

    return 0;
}