#include <stdio.h>
int main(){
    // Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
    FILE *fp;
    char filename[50];
    char line[200];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error! The file '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }
    printf("\n--- File Content ---\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}