#include<stdio.h>
#include <math.h>
int main(){
  // Write a program to find the roots of a quadratic equation and categorize them.
    float a, b, c;
    float discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);
    // Check if it is really a quadratic equation
    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
    } else {
        // Calculate discriminant
        discriminant = b * b - 4 * a * c;
        // Categorize based on discriminant
        if (discriminant > 0) {
            // Two distinct real roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct:\n");
            printf("Root1 = %.2f , Root2 = %.2f\n", root1, root2);
        }
        else if (discriminant == 0) {
            // Two equal real roots
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and equal:\n");
            printf("Root1 = Root2 = %.2f\n", root1);
        }
        else {
            // Complex conjugate roots
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and conjugate:\n");
            printf("Root1 = %.2f + %.2fi , Root2 = %.2f - %.2fi\n",
                   realPart, imaginaryPart, realPart, imaginaryPart);
        }
    }

    return 0;
}