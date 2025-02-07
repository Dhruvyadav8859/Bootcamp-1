// WAP to find the maximum difference.

#include <stdio.h>

int maxDifference(int arr[], int n) {
    int minVal = arr[0], maxDiff = arr[1] - arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - minVal > maxDiff)
            maxDiff = arr[i] - minVal;
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return maxDiff;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Maximum difference: %d\n", maxDifference(arr, n));
    return 0;
}