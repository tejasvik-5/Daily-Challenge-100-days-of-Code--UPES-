#include <stdio.h>
// Return a structure containing top student's details from a function.
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student findTop(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[top].marks)
            top = i;
    return s[top];
}
int main() {
    struct Student s[5], top;
    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    top = findTop(s, 5);
    printf("\nTop Student:\n");
    printf("%s %d %.2f\n", top.name, top.roll, top.marks);
    return 0;
}