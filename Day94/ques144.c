#include <stdio.h>
// Write a function that accepts a structure as parameter and prints its members.
struct Student {
    char name[50];
    int roll;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student s = {"Amit", 10, 88.5};
    printStudent(s);
    return 0;
}