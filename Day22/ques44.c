#include <stdio.h>
int main(){
// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
int n, i;
float sum = 0.0;
int numerator = 1, denominator = 2;
printf("Enter number of terms: ");
scanf("%d", &n);
for(i = 1; i <= n; i++) {
 sum = sum + (float)numerator / denominator;
 numerator += 2;      
 denominator += 2;
}
 printf("Sum of the series = %.2f\n", sum);
 return 0;
}