/*Q8
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
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
        printf("* ");
      }
        printf("\n");
    }
    return 0;
}