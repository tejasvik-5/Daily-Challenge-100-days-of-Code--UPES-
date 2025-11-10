#include <stdio.h>
int main(){
    // Rotate an array to the right by k positions
    int n, k, i, j, temp;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < k; i++) {
        temp = arr[n - 1]; 
        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1]; 
        }
        arr[0] = temp; 
    }
    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}