#include <stdio.h>
int main(){
    // Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[500];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    if (scanf("%d", &k) != 1) return 0;
    if (k > n || k <= 0) {
        printf("-1\n");
        return 0;
    }
    long long windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];
    long long maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i];
        windowSum -= arr[i - k];
        if (windowSum > maxSum) maxSum = windowSum;
    }
    printf("%lld\n", maxSum);
    return 0;
}