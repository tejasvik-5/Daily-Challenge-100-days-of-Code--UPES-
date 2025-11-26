#include <stdio.h>
// Create an enum for months and print how many days each month has.
enum Months {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};
int main() {
    for (int m = JAN; m <= DEC; m++) {
        switch (m) {
            case JAN: case MAR: case MAY: case JUL:
            case AUG: case OCT: case DEC:
                printf("%d has 31 days\n", m);
                break;

            case APR: case JUN: case SEP: case NOV:
                printf("%d has 30 days\n", m);
                break;

            case FEB:
                printf("%d has 28/29 days\n", m);
                break;
        }
    }
    return 0;
}