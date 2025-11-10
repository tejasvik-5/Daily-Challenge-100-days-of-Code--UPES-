#include <stdio.h>
int main(){
    // Find the second largest element in an array.
    int n, i;
    int arr[100];
    int largest, secondLargest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element = %d\n", secondLargest);
    return 0;
}