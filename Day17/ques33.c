#include <stdio.h>
#include <math.h>
int main() {
    // Write a program to check if a number is an Armstrong number.
    int n, original, remainder, digits = 0;
    double result = 0.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp = temp / 10;
    }
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
    return 0;
}