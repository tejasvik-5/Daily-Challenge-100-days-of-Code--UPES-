#include <stdio.h>
int main(){
    // Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers (from 0 to %d, one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int expectedSum = n * (n + 1) / 2;  // sum of 0..n
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    int missing = expectedSum - actualSum;
    printf("Missing number = %d\n", missing);
    return 0;
}