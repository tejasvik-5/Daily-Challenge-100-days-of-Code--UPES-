#include <stdio.h>
int main(){
    // Remove all vowels from a string.
    char str[300], result[300];
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            continue;   
        }
        result[j++] = str[i]; 
    }
    result[j] = '\0'; 
    printf("String without vowels: %s", result);
    return 0;
}