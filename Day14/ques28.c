#include <stdio.h>
int main() {
// Write a program to print the product of even numbers from 1 to n. basic code
    int n, product = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("Product of even numbers from 1 to %d = %d\n", n, product);
    return 0;
}