// WAP to generate all prime numbers between 1 and N.

#include <stdio.h>

void printPrimes(int n) {
    int isPrime;
    for (int i = 2; i <= n; i++) {
        isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d:\n", n);
    printPrimes(n);

    return 0;
}