#include <stdio.h>
// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
enum Role { ADMIN, USER, GUEST };
int main(){
    enum Role r = USER;
    switch (r) {
        case ADMIN: printf("Welcome, Admin! Full access granted.\n"); break;
        case USER:  printf("Welcome, User! Limited access.\n"); break;
        case GUEST: printf("Welcome, Guest! Read-only access.\n"); break;
    }
    return 0;
}