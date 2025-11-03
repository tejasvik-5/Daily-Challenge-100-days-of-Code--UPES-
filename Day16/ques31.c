#include<stdio.h>
int main(){
    // Write a program to take a number as input and print its equivalent binary representation.
    int n;
    long long binary = 0; 
    int rem, place = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;  
    while (n > 0) {
        rem = n % 2;          
        binary = binary + rem * place;  
        n = n / 2;            
        place = place * 10;    
    }
    printf("Binary of %d is: %lld\n", temp, binary);
    return 0;
}