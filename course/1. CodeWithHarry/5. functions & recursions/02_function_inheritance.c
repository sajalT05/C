#include<stdio.h>

// function prototype
void greetMorning();
void greetEvening();
void greetNight();

int main() {
    printf(" functions in functions. \n ");
    // call function
    greetNight();
    return 0;
}

// function definition
void greetNight(){
    greetMorning();
    greetEvening();
    printf("\n Good Night.");
}
void greetMorning(){
    printf("\n Good Morning.");
}
void greetEvening(){
    printf("\n Good Evening.");
}