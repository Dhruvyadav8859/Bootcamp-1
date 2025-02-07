// WAP to find the sum of digit of number.
#include<stdio.h>

int digits(int n){
    if(n<10){
        return n;
    }
    return (n%10)+digits(n/10);
}

int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("sum of digits %d",digits(num));
    return 0;
}