#include<stdio.h>
int main(){
    //Write a program to find and display the sum of the first n natural numbers.
    int n, sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
    sum = sum + i;
    }
    printf("The sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
