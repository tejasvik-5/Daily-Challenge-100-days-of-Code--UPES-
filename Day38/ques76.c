#include <stdio.h>
int main(){
    // Check if a matrix is symmetric.
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int a[100][100];
    int isSymmetric = 1;  
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    return 0;
}