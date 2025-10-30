#include<stdio.h>
int main(){
// Write a program to calculate the factorial of a number.
    int n;
     printf("Enter a number: ");
     scanf("%d", &n);
    int product = 1;
     for(int i = 1; i <= n; i++){
        product = product * i;
     }
     printf("The factorial is: %d",product);
    return 0;
}