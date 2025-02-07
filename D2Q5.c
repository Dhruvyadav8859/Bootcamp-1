// Write a program to find if a triangle is valid based on angles or sides.

#include<stdio.h>

void checkAngles(){
    int a,b,c,sum;
    printf("Enter the angles of Triangle ");
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    if(sum==180 && a>0 && b>0 && c>0){
        printf("The triangle is valid based on angles.");
    }
    else{
        printf("The triangle is not valid based on angles.");
    }
}

void checkSides(){
    int side1, side2, side3;
    
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("The triangle is valid based on sides.\n");
    } else {
        printf("The triangle is not valid based on sides.\n");
    }

}

int main() {
    int choice;

    printf("Choose an option to check triangle validity:\n");
    printf("1. Check by angles\n");
    printf("2. Check by sides\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        checkAngles();
    } else if (choice == 2) {
        checkSides();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}