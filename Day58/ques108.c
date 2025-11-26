#include <stdio.h>
int main(){
    // Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
    int n, nums[200], answer[200];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }

        answer[i] = product;
    }
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%d, ", answer[i]);
        else
            printf("%d\n", answer[i]);
    }
    return 0;
}