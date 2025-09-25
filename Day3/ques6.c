#include<stdio.h>
int main(){
    //Write a program to swap two numbers using a third variable.
    int x,y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    // swapping using third variable
    int z = x;
    x = y;
    y = z;
    printf("After swapping: \n");
    printf("First number: %d\n",x);
    printf("Seconf number: %d\n",y);
    return 0;
}