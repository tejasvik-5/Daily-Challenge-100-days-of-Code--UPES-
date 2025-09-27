#include<stdio.h>
int main(){
// Write a program to input three numbers and find the largest among them using if–else.
float a,b,c;
printf("Enter 1st number: ");
scanf("%f", &a);
printf("Enter 2nd number: ");
scanf("%f", &b);
printf("Enter 3rd number: ");
scanf("%f", &c);
if(a>b && a>c){
printf("%f is the largest \n",a);
}
 else if(b>a && b>c){
printf("%f is the largest \n",b);
}
else{
printf("%f is the largest \n",c);
}
    return 0;
}
