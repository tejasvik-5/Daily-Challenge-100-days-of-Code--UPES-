#include <stdio.h>
int main(){
// Find the digit that occurs the most times in an integer number.

    int num, digit, i;
    int count[10] = {0};  // To store frequency of digits 0–9
    int max = 0, maxDigit = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
        num = -num;
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            maxDigit = i;
        }
    }
    printf("Digit that occurs the most times: %d\n", maxDigit);
    printf("It occurs %d times.\n", max);
    return 0;
}