#include <stdio.h>
// Assign explicit values starting from 10 and print them.
enum Values { A = 10, B, C, D };
int main(){
    printf("%d %d %d %d\n", A, B, C, D);
    return 0;
}