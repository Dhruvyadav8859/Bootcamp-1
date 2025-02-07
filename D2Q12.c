// WAP to check if a number is an Armstrong number.

#include<stdio.h>
#include<math.h>

int main(){
    int num,num1,rem,count=0,o_num;
    double res=0.0;
    printf("Enter the number ");
    scanf("%d",&num);
    o_num=num;
    num1 = num;
      while(num1!=0){
        num1=num1/10;
        count++;
    }

    while(num>0){
        int rem=num%10;
        res = res + pow(rem,count);
        num /= 10;
    }
    
    if(res==o_num){
        printf("yes %d is armstrong number",o_num);
    }
    else{
        printf("No %d is not an armstrong number",o_num);
    }
    return 0;
}