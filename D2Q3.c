// Write a program to check if a year is a leap year.

#include<stdio.h>

int main(){
    int year;
    printf("Enter the year ");
    scanf("%d",&year);
    if((year%4 == 0 && year%100 != 0)||(year%400 == 0)){
        printf("yes leap year");
}
        else{
            printf("not a leap year");
        }
    return 0;
}