#include <stdio.h>

int main(){
    int rows, cols;
    //Find the transpose of a matrix
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[100][100], t[100][100];
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}