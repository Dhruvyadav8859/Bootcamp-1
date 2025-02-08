/*Q8
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1
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
    for(int k=i+1;k<n;k++){
        printf("%d ",k-i);
        }
        for(int k=n-i;k>0;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}