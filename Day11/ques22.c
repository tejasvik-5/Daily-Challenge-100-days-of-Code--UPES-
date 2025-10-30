#include <stdio.h>
int main(){
    // Write a program to find profit or loss percentage given cost price and selling price.
    int cp;
    printf("Enter cost price : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter selling price : ");
    scanf("%d", &sp);
    if(sp>cp){
     printf("profit");
    }
        if(cp>sp){
            printf("loss");
    }
    if(sp==cp){
    printf("no proft, no loss");
    }
    return 0;
}