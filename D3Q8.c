// WAP to find the power of two using recursion.

#include <stdio.h>

int powerOfTwo(int n) {
    return (n == 0) ? 1 : 2 * powerOfTwo(n - 1);
}

int main() {
    int n;
    printf("Enter exponent: ");
    scanf("%d", &n);
    printf("2^%d = %d\n", n, powerOfTwo(n));
    return 0;
}