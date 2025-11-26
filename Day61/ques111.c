#include <stdio.h>
int main(){
    // Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
    int n, k;
    printf("Enter n (array size) and k (window size): ");
    if (scanf("%d %d", &n, &k) != 2) return 0;

    if (k > n || n <= 0 || k <= 0) {
        printf("Invalid input: make sure 0 < k <= n and n > 0\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0; 
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break; 
            }
        }
        printf("%d", firstNeg);
        if (i < n - k) printf(" "); 
    }
    printf("\n");
    return 0;
}