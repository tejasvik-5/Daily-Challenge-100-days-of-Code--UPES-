#include <stdio.h>
#include <string.h>
int main(){
    // Print initials of a name with the surname displayed in full.
    char str[200];
    int len, i, lastSpace = -1;
    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            lastSpace = i;
            break;
        }
    }
    if (str[0] != ' ')
        printf("%c. ", str[0]);
    for (i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ')
            printf("%c. ", str[i + 1]);
    }
    printf("%s\n", str + lastSpace + 1);
    return 0;
}