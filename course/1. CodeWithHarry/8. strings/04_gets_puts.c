#include<stdio.h>

int main() {
    printf(" gets and puts \n");
    // creating a string for storign name
    char name_string[100];
    // taking input
    printf("enter your name: ");
    // storing input string
    gets(name_string);
    // printing input string
    printf("\n your input name is: ");
    puts(name_string);
    return 0;
}