// WAP to check if a number is prime

#include <stdio.h>

int main() {
    int n, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) 
        isPrime = 0;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

// #include<stdio.h>

// int main(){
//     int n,fac=1;
//     printf("Enter the number ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         fac=fac*i;
//     }
//     printf("Factorial is %d",fac);
//     return 0;
// }