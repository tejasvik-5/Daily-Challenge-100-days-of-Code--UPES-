#include <stdio.h>
int main(){
    //Find the sum of each row of a matrix and store it in an array.
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[100][100];
    int rowSum[100];  
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; 
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }
    return 0;
}