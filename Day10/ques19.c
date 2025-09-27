#include<stdio.h>
int main(){
    // Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
float x,y,z;
printf("Enter side 1: ");
scanf("%f", &x);
printf("Enter side 2: ");
scanf("%f", &y);
printf("Enter side 3: ");
scanf("%f", &z);
if(x==y && y==z && x==z){
    printf("Equilateral triangle\n");
}
else if (x == y || y == z || x == z){
    printf("Isosceles triangle\n");
}
else{
    printf("Scalene triangle\n");
}
    return 0;
}