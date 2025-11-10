#include <stdio.h>
int main(){
// Insert an element in a sorted array at the appropriate position.
    int n, i, j, num;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order (ascending):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) {
        if(arr[i] > num) {
            break;
        }
    }
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = nm;
    n++;  
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}