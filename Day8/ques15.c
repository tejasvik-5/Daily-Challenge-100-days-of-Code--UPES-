#include<stdio.h>
int main(){
    // Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("It is an Uppercase character");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("It is an lowercase character");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("It is a digit");
    }
    else{
        printf("It is a special character");
    }
    return 0;
}