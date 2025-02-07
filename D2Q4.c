// Write a program to check if a character is a vowel or consonant.

#include<stdio.h>

int main(){

    char V;
    printf("Enter the alphabet ");
    scanf("%c",&V);

    if(V=='a'||V=='e'||V=='i'||V=='o'||V=='u'||V=='A'||V=='E'||V=='I'||V=='O'||V=='U'){
        printf("Yes vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}