#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};  
    int size = 5;
    int isPalindrome = 1; 
    int j = size - 1; 

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0;  
            break;  
        }
        j--;  
    }

    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is NOT a palindrome.\n");
    }

    return 0;
}

