#include<stdio.h>
int main(){
    // Write a program to input two numbers and display their sum.
    int a,b;
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d",&b);
    int sum = a + b;
    printf("sum of two numbers: %d", sum);
   return 0;
}
    