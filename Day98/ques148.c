#include <stdio.h>
#include <string.h>
// Take two structs as input and check if they are identical.
struct Student {
    int id;
    char name[20];
};
int main(){
    struct Student s1, s2;
    printf("Enter ID for student 1: ");
    scanf("%d", &s1.id);
    printf("Enter name for student 1: ");
    scanf("%s", s1.name);
    printf("Enter ID for student 2: ");
    scanf("%d", &s2.id);
    printf("Enter name for student 2: ");
    scanf("%s", s2.name);
    if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0) {
        printf("Both structs are IDENTICAL\n");
    } else {
        printf("Structs are NOT identical\n");
    }
    return 0;
}