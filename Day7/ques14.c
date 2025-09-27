#include<stdio.h>
int main(){
   //Write a program to input a character and check whether it is a vowel or consonant using if–else.
    int alphabet;
    printf("Enter a alphabhet");
    scanf("%d", &alphabet);
    int a,e,i,o,u;
    if(alphabet==a && alphabet==e && alphabet==i && alphabet==o && alphabet==u){
        printf("It is vowel");
    }
    else{
        printf("It is consonant");
    }
    return 0;
}