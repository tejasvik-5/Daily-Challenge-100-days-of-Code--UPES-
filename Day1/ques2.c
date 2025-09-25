#include<stdio.h>
int main(){
   // Write a program to input two numbers and display their sum, difference, product, and quotient.
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    int sum = a+b;
    printf("The sum of two numbers is: %d\n",sum);
    int diff = a-b;
    printf("The difference of numbers is: %d\n",diff);
    int prod = a*b;
    printf("The products of two numbers is: %d\n",prod);
    int q = a/b;  // quotient = dividend / divisor
    printf("The quotient of two numbers is: %d\n",q);
    return 0;
}