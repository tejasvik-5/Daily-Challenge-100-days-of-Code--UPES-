#include <stdio.h>
// Reverse each word in a sentence without changing the word order.
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[300];
    int i = 0, wordStart = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, wordStart, i - 1);
            wordStart = i + 1;  
        }
        i++;
    }
    printf("Reversed words: %s", str);
    return 0;
}