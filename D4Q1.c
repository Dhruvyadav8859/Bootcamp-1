// WAP to find the second largest element in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max=0,smax=0;
    for(int i=0; i<6 ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0; i<6 ;i++){
        if(smax < arr[i] && max != arr[i]){
            smax = arr[i];
        }
    }
    printf("smax = %d \n",smax);
    printf("max = %d \n",max);
    return 0;
}