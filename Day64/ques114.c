#include <stdio.h>
#include <string.h>
int main(){
    // Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
    char s[1001];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }
    if (len == 0) {
        printf("0\n");
        return 0;
    }
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1; // not seen yet

    int maxLen = 0;
    int start = 0; 
    for (int i = 0; i < len; i++) {
        unsigned char ch = s[i];
        if (last[ch] >= start) {
            start = last[ch] + 1;
        }
        last[ch] = i; 
        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
    }
    printf("%d\n", maxLen);
    return 0;
}