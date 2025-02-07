// WAP to left rotate an array by d places.

#include <stdio.h>

void leftRotate(int arr[], int n, int d) {
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];

    for (int i = 0; i < n - d; i++)
        arr[i] = arr[i + d];

    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main() {
    int n, d;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter rotation count: ");
    scanf("%d", &d);

    leftRotate(arr, n, d);
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}