#include <stdio.h>
// Find and print the student with the highest marks.
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct Student s[5];
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    printf("\n--- Student List ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s  Roll: %d  Marks: %.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}