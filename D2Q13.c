// WAP to calculate the GCD and LCM of two numbers.

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, g, l;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    g = gcd(a, b);
    l = (a * b) / g;

    printf("GCD: %d\n", g);
    printf("LCM: %d\n", l);

    return 0;
}