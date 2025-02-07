// WAP to find the sum of the first N natural numbers.


#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    return 0;
}