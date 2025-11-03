#include<stdio.h>
int main(){
//Write a program to print the sum of the first n odd numbers.
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}