#include <stdio.h>
// Show that enums store integers by printing assigned values.
enum test {X=5, Y=10, Z=15};
int main(){
    printf("X=%d, Y=%d, Z=%d\n", X, Y, Z);
    return 0;
}