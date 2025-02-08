/* Q11 Hollow Pyramid star pattern.
* * * * * * * * *
  *           *
    *       *
      *   *
        *  
*/

#include<stdio.h>

int main(){

    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      for(int j=0; j<i; j++){
        printf("  ");
      }
      for(int k=i; k<(2*n-1)-i;k++){
        if(i==n-1 || i==0 || i==k || i+k==(n-1)*2){
            printf("* ");
        }
        else{
            printf("  ");
        }
      }
        printf("\n");
    }
    return 0;
}