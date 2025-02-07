/*Q4
A
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>

int main(){

    int i,j,n;
    printf("Enter the no. of rows: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-(n-i);j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
    return 0;
}
