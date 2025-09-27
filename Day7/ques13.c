#include<stdio.h>
int main(){
    //Write a program to input a year and check whether it is a leap year or not using conditional statements.
int n;
printf("Enter a year: ");
scanf("%d", &n);
if(n%4==0){
printf("The year is leap year");
}
else{
    printf("The year is not leap year");
}
    return 0;
}