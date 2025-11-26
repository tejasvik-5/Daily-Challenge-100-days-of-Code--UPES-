#include <stdio.h>
// Store employee data in a binary file using fwrite() and read using fread().
struct Employee {
    int id;
    char name[20];
    float salary;
};
int main(){
    struct Employee e1, e2;
    FILE *fp;
    printf("Enter ID: ");
    scanf("%d", &e1.id);
    printf("Enter Name: ");
    scanf("%s", e1.name);
    printf("Enter Salary: ");
    scanf("%f", &e1.salary);
    fp = fopen("employee.dat", "wb");  
    if (fp == NULL) {
        printf("File not opened!\n");
        return 1;
    }
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);
    fp = fopen("employee.dat", "rb");  
    if (fp == NULL) {
        printf("File not opened!\n");
        return 1;
    }
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);
    printf("\nData read from file:\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);
    return 0;
}