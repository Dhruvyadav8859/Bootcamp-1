// WAP to check if an array is sorted.

#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (isSorted(arr, n))
        printf("Array is sorted.\n");
    else
        printf("Array is not sorted.\n");
    return 0;
}