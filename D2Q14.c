// WAP to find integers a, b such that n = a³ × b, where b is cube-free.

#include <stdio.h>
#include <math.h>

int isCubeFree(int n) {
    for (int i = 2; i * i * i <= n; i++) {
        if (n % (i * i * i) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, a = 1, b;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i * i * i <= n; i++) {
        if (n % (i * i * i) == 0) {
            a = i;
        }
    }

    b = n / (a * a * a);
    
    if (isCubeFree(b))
        printf("n = %d^3 x %d\n", a, b);
    else
        printf("No such representation found.\n");
    
    return 0;
}