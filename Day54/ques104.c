#include <stdio.h>
int main(){
    // Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int totalSum = n * (n + 1) / 2;   
    int prefixSum = 0;
    for (int x = 1; x <= n; x++) {
        prefixSum += x;               
        int rightSum = totalSum - prefixSum + x;   
        if (prefixSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}