#include<stdio.h>
int main(){
// Write a program to swap two numbers without using a third variable.
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    // swapping numbers
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping \n");
    printf("First number: %d\n",a);
    printf("Second number: %d\n",b);
    return 0; 
}