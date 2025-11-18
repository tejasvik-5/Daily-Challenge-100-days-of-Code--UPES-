#include <stdio.h>
int main(){
    // Check if the elements on the diagonal of a matrix are distinct.
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[100][100];
    int diag[100];       
    int distinct = 1;    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
    }
    if (distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");
    return 0;
}