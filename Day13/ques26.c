#include<stdio.h>
int main(){
    // Write a program to print numbers from 1 to n.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
         printf("%d\n",i);
    }
    return 0;
}
