#include <stdio.h>
int main(){
// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
    int i, j, space;
    for(i = 5; i >= 1; i--) {
        for(space = 5; space > i; space--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }
    return 0;
}