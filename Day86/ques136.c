#include <stdio.h>
// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
int main(){
    int choice, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1. Add\n2. Subtract\n3. Multiply\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case ADD:        printf("Result = %d\n", a + b); break;
        case SUBTRACT:   printf("Result = %d\n", a - b); break;
        case MULTIPLY:   printf("Result = %d\n", a * b); break;
        default:         printf("Invalid choice\n");
    }
    return 0;
}