#include <stdio.h>
// Define a structure Student with name, roll_no, and marks, then read and print one student's data.
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll no: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\n--- Student Details ---\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    return 0;
}