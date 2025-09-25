#include<stdio.h>
int main(){
    // Write a program to calculate the area and circumference of a circle given its radius.
    float r;
    float pi = 3.14;
    printf("Enter radius");
    scanf("%f",&r);
    float area = pi * r * r;
    printf("The area of circle is: %f\n", area);
    float circum = 2 * pi * r;
    printf("The circumference of circle is %f", circum);
    return 0;
}