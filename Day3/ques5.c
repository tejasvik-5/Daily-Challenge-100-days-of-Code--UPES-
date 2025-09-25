#include<stdio.h>
int main(){
float C,F;
printf("Enter temperature in Celcius: ");
scanf("%f", &C);
F = (C * 1.8) + 32;
printf("The temperature in Fahrenheit is: %f",F);
    return 0;
}