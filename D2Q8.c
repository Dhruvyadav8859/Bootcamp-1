// WAP to check for uppercase, lowercase, or special character.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') 
        printf("Uppercase letter\n");
    else if (ch >= 'a' && ch <= 'z') 
        printf("Lowercase letter\n");
    else 
        printf("Special character\n");

    return 0;
}