//  WAP to  find the frequency in a sorted array.

#include <stdio.h>

void findFrequency(int arr[], int n) {
    int count = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            printf("Element %d occurs %d times\n", arr[i - 1], count);
            count = 1;
        }
    }
    printf("Element %d occurs %d times\n", arr[n - 1], count);
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Frequencies of elements in the sorted array:\n");
    findFrequency(arr, n);

    return 0;
}