#include <stdio.h>
int main(){
    // Replace spaces with hyphens in a string.
    char str[300];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';   
        }
    }
    printf("Modified string: %s", str);
    return 0;
}