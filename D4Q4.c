// WAP to remove all the duplicate elements from an array.

#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n - 1];
    return j;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    n = removeDuplicates(arr, n);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}