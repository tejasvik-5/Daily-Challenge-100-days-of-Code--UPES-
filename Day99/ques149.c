#include <stdio.h>
#include <stdlib.h>
// Use malloc() to allocate structure memory dynamically and print details.
enum Gender {
    MALE = 1,
    FEMALE = 2,
    OTHER = 3
};
struct Person {
    char name[20];
    int age;
    enum Gender gen;
};
int main(){
    struct Person *p;
    p = (struct Person*) malloc(sizeof(struct Person));
    if(p == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }
    printf("Enter name: ");
    scanf("%19s", p->name);
    printf("Enter age: ");
    scanf("%d", &p->age);
    printf("Enter gender (1-Male, 2-Female, 3-Other): ");
    scanf("%d", (int*)&p->gen);
    printf("\n--- Details ---\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    if(p->gen == MALE)
        printf("Gender: Male\n");
    else if(p->gen == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");
    free(p);  
    return 0;
}