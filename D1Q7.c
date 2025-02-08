/*Q7
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/
#include<stdio.h>

int main(){

    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++){
            printf("  ");
        }
        for(int j=0;j<i;j++){
        printf("%c ",'A'+j);
        }
        for(int j=i-1;j>=1;j--){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}