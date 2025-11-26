#include <stdio.h>
int main(){
    // Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
    FILE *fp;
    int n, roll, marks;
    char name[50];
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s  Roll: %d  Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}