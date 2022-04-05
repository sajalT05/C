#include<stdio.h>

int main() {
    printf("switch case statements");

    // take input from user
    printf("\nEnter a number, 1 to 5: ");
    int n;
    scanf("%d", &n);

    // switch case statements
    switch(n) {
        // checking value of n with 1
        case 1: printf("\n%d is 1", n); break;
        // checking value of n with 2
        case 2: printf("\n%d is 2", n); break;
        // checking value of n with 3
        case 3: printf("\n%d is 3", n); break;
        // checking value of n with 4
        case 4: printf("\n%d is 4", n); break;
        // checking value of n with 5
        case 5: printf("\n%d is 5", n); break;
        // if value of n doesn't matches with any number.
        default: printf("\n%d is not between 1 and 5", n);
    }
    return 0;
}