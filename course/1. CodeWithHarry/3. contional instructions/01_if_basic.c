#include<stdio.h>

int main() {
    printf("check even or odd");
    printf("\nEnter a number: ");
    int n;
    scanf("%d", &n);

    // check odd or even

    if (n % 2 == 0){
        printf("\n%d is even", n);
    }
    else{
        printf("\n%d is odd", n);
    
    return 0;
}