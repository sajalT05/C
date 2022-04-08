#include<stdio.h>

int main() {
    printf(" special instructor. \n");

    // printing
    printf("\nprinting\n");
    char stringName[]="man";
    printf("Print string: %s", stringName);
    
    // input
    printf("\n\ninput");
    char inputString[100];
    printf("\nEnter your name: ");
    scanf("%s",inputString);
    printf("Input string: %s",inputString);

    return 0;
}