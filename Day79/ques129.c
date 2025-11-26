#include <stdio.h>
int main(){
    // A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
    FILE *fp;
    int num, sum = 0, count = 0;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count > 0) {
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", (float)sum / count);
    } else {
        printf("No numbers found in file.\n");
    }
    return 0;
}