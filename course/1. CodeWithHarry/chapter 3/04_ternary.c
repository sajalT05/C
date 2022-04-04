#include<stdio.h>

int main() {
printf("ternary conditions");

//check number less than 5 or not

printf("\nEnter a number: ");
int n;
scanf("%d", &n);

// ternary conditional statements

(n<5)? printf("\n%d is less than 5", n) : printf("\n%d is greater than 5", n);

return 0;
}