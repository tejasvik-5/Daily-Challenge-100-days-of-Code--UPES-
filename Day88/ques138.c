#include <stdio.h>
// Print all enum names and integer values using a loo
enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };
int main(){
    enum Days d;
    for (d = SUN; d <= SAT; d++)
        printf("%d\n", d);
    return 0;
}