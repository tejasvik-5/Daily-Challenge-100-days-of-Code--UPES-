#include<stdio.h>
int main(){
    // Write a program to input time in seconds and convert it to hours:minutes:seconds format.
    int s;
    printf("Enter time in seconds: ");
    scanf("%d", &s);
    // calculating hours
    int H,S,M;
    H = s / 3600;
    // Calculating minutes
    M = (s % 3600) / 60;
    //Calculating remaining seconds
    S = (s % 3600) % 60;
    printf("Time in HH:MM:SS format: %02d:%02d:%02d",H,M,S);
    return 0;
}