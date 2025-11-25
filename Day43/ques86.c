#include <stdio.h>
int main(){
// Check if a string is a palindrome.
    char str[200];
    int start = 0, end = 0, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[end] != '\0') {
        if (str[end] == '\n') break;
        end++;
    }
    end--; 
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("Not a palindrome.\n");
    return 0;
}