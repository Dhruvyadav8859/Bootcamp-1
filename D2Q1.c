// WAP to check if a number is positive, negative, or zero.

#include <stdio.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}