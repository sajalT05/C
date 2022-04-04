#include<stdio.h>

int main() {
printf("while loop\n");
// take user input
printf("\nEnter a number: ");
int n;
scanf("%d", &n);
// while loop
// pritn value of n till 0
// check if value of n is greater than 0
while(n>0) {
    // print value of n
    printf("\n%d", n);
    // decrease value of n by 1
    n--;
}   

return 0;
}