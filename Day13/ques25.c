    #include <stdio.h>
    int main(){
        // Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
    int a, b;
    char ch;  
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &ch);  
    switch (ch) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error! Division by zero not allowed.\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error! Modulus by zero not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
    return 0;
}