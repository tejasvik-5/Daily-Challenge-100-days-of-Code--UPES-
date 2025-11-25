#include <stdio.h>
int main(){
    // Find the first repeating lowercase alphabet in a string.
    char str[300];
    int freq[26] = {0};
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {   
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}