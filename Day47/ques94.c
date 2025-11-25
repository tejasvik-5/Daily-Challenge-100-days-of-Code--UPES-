#include <stdio.h>
#include <string.h>
int main(){
    //Find the longest word in a sentence.
    char str[300];
    char longest[300] = "";
    char current[300];
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];   
        } 
        else {
            current[j] = '\0';       
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0;  
        }
        i++;
    }
    current[j] = '\0';
    if (strlen(current) > strlen(longest)) {
        strcpy(longest, current);
    }
    printf("Longest word: %s\n", longest);
    return 0;
}