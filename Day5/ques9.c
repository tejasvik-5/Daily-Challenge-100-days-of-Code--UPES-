#include<stdio.h>
#include<math.h>
int main(){
    // Write a program to calculate simple and compound interest for given principal, rate, and time.
    // Calculating Simple Interest
float P,R,T;
printf("Enter principle: ");
scanf("%f", &P);
printf("Enter rate: ");
scanf("%f", &R);
printf("Enter time: ");
scanf("%f", &T);
float SI = (P * R * T)/100;
printf("Simple Interest is: %f\n",SI);
// Calculating Compund Interest
float A,CI;
A = P * pow((1 + R/100),T);
CI = A - P;
printf("Compound Interest: %f\n",CI);
return 0;
}