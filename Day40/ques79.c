#include <stdio.h>
int main(){
    // Perform diagonal traversal of a matrix.
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[100][100];
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Diagonal Traversal:\n");
    for (int start = 0; start < rows; start++) {
        int i = start, j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    for (int start = 1; start < cols; start++) {
        int i = rows - 1, j = start;
        while (i >= 0 && j < cols) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    return 0;
}