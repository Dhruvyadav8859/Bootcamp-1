/* Q10 Hollow Pyramid star pattern.
        *
      *   *
    *       *
  *           *
* * * * * * * * *
*/

#include<stdio.h>

int main(){

    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
          printf("  ");
        }
        for(int k=n-i; k<=n+i; k++){
            if(i+k==n || i==n-1 || i==0 || k+i==n+i*2){
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