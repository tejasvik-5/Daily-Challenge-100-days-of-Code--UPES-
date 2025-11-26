#include <stdio.h>
int main(){
    // Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
    int n, target;
    int a[200];
    int first = -1, last = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            first = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == target) {
            last = i;
            break;
        }
    }
    printf("%d %d", first, last);
    return 0;
}