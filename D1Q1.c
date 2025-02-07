/*Q1
 *
 * * 
 * * *
 * * * *
 * * * * *

*/
#include<stdio.h>

int main(){

    int i,j,n=5;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-(n-i);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}