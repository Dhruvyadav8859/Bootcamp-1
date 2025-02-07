// WAP to print sum of n natural numbers.

#include<stdio.h>

int sum(int n){
    if(n>0){
        return n+sum(n-1);
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}