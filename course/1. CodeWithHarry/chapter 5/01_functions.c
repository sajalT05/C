#include<stdio.h>

// function prototype
void greet();

int main() {
    printf(" function \n");

    // function call
    greet();

    return 0;
}

// function definition
void greet(){
    printf("Hello, Good Morning.");
}