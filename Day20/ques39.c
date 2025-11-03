#include <stdio.h>
int main(){
    // Write a program to find the product of odd digits of a number.
    int n, digit;
    int product = 1; 
    int hasOdd = 0;  
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }
    while (n > 0) {
        digit = n % 10;  
        if (digit % 2 != 0) { 
            product = product * digit;
            hasOdd = 1;
        }
        n = n / 10; 
    }
    if (hasOdd)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found.\n");
    return 0;
}