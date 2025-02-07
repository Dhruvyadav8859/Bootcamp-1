//  WAP to find leaders in an array.

#include <stdio.h>

void findLeaders(int arr[], int n) {
    int max = arr[n - 1];
    printf("%d ", max);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            printf("%d ", max);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Leaders in the array: ");
    findLeaders(arr, n);
    return 0;
}