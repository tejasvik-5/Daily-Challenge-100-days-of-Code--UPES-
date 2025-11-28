#include <stdio.h>
// Use pointer to struct to modify and display data using -> operator.
enum Day { MON = 1, TUE, WED, THU, FRI };
struct Student {
    char name[20];
    int age;
    enum Day presentDay;
};
int main() {
    struct Student s;          
    struct Student *ptr;      
    ptr = &s;                  
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter age: ");
    scanf("%d", &ptr->age);
    ptr->presentDay = WED;   
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Present Day (enum value): %d\n", ptr->presentDay);

    return 0;
}
