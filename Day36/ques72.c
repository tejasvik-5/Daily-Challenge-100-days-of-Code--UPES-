#include <stdio.h>
int main(){
    // Find the sum of all elements in a matrix.
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[100][100];
    int sum = 0;
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];   
        }
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}