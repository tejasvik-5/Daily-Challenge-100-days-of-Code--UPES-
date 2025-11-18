#include <stdio.h>
int main(){
    // Read and print a matrix.
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[100][100];  
    printf("Enter the elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}