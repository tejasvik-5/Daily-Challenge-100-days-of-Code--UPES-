#include<stdio.h>
int main(){
 // Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 int l,b;
 printf("Enter lenth of rectangle: ");
 scanf("%d", &l);
 printf("Enter bredath of rectangle: ");
 scanf("%d", &b);
int area = l * b;
printf("The area of rectangle is: %d\n", area);
int perimeter = 2 *(l+b);
printf("The perimeter of rectangle is: %d\n", perimeter);
    return 0;
}