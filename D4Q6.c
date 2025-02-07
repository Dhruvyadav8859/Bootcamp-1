// WAP to move all the zeros to the end.

#include <stdio.h>

void moveZeros(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            arr[j++] = arr[i];
    }
    while (j < n)
        arr[j++] = 0;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    moveZeros(arr, n);
    printf("Array after moving zeros: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}