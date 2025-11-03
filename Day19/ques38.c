#include<stdio.h>
int main(){
// Write a program to find the sum of digits of a number.
int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int ld = 0;
    while(n != 0){
       ld = n % 10;
        sum = sum + ld;
        n = n/10;
    }
    printf("The sum of digits are: %d",sum);
return 0;
}