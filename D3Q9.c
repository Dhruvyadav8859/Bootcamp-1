// WAP to count the digits in a number using recursion.

#include <stdio.h>

int countDigits(int n) {
    return (n == 0) ? 0 : 1 + countDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of digits: %d\n", countDigits(n));
    return 0;
}