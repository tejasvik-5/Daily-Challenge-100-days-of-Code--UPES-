#include <stdio.h>
int main(){
    // Find the sum of main diagonal elements for a square matrix.
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[100][100];
    int sum = 0;
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}