#include <stdio.h>
// Create Employee structure with nested Date structure for joining date and print details.
struct Date {
    int day, month, year;
};
struct Employee {
    char name[50];
    int id;
    struct Date join;
};
int main() {
    struct Employee e;
    printf("Enter name id joining(day month year): ");
    scanf("%s %d %d %d %d",
          e.name, &e.id,
          &e.join.day, &e.join.month, &e.join.year);
    printf("\nEmployee Details:\n");
    printf("Name: %s\nID: %d\nJoining: %02d-%02d-%d\n",
           e.name, e.id,
           e.join.day, e.join.month, e.join.year);
    return 0;
}