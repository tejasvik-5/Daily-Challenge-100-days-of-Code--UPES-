#include <stdio.h>
int main(){
    // Check if two strings are anagrams of each other.
    char s1[200], s2[200];
    int freq[256] = {0};   
    int i;
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != '\n')
            freq[(unsigned char)s1[i]]++;
    }
    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] != '\n')
            freq[(unsigned char)s2[i]]--;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}