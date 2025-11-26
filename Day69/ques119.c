#include <stdio.h>
int main(){
    // Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int visited[10000] = {0}; 
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (visited[x] == 1) {
            printf("Repeated element = %d\n", x);
            return 0;
        }
        visited[x] = 1;  
    }
    printf("No repeated element\n");
    return 0;
}