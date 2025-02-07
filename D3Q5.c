// WAP to print numbers from 1 to n.

#include<stdio.h>

int num(int n){
    if(n==1){
        printf(" %d",n);
        return 1; 
    }
    num(n-1);
    
    printf(" %d",n);
}
int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    num(n);
    return 0;
}