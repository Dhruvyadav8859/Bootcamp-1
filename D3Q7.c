// WRT print numbers from n to 1.
#include<stdio.h>

int num(int n){
    if(n==0){
        return 1; 
    }
    printf(" %d",n);
    num(n-1);
}
int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    num(n);
    return 0;
}