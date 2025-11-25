#include <stdio.h>
int main(){
// Count characters in a string without using built-in length functions.
    char s[1000];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;
    int count = 0;
    while (s[count] != '\0') count++;  
    if (count > 0 && s[count-1] == '\n') count--;
    printf("Length: %d\n", count);
    return 0;
}