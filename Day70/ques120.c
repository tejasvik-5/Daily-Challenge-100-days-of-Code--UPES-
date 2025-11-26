#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    // Write a program to take a string input. Change it to sentence case.
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
    if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }
    printf("Sentence case: %s\n", s);
    return 0;
}