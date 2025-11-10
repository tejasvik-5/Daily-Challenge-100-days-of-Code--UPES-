#include <stdio.h>
int main(){
// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
    int i, j;
    printf("*\n\n");
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");
    printf("*\n");
    return 0;
}