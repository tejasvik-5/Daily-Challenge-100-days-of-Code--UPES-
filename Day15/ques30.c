#include<stdio.h>
int main(){
    // Write a program to reverse a given number.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int r = 0;
    int ld = 0;
    while(n != 0){
       ld = n % 10;
       r = r * 10;
       r = r + ld;
       n = n/10;
    }
    printf("The reversed number are: %d",r);
    return 0;
}