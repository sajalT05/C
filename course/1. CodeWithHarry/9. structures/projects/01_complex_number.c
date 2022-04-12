/*
create a short datatype for complex number
*/

#include<stdio.h>
#include<string.h>

// create complex number structure
// create complex datatype usign typedef keyword
typedef struct complexNumber{
    float real; // stores real values in decimal format
    float imaginary; // stores imaginary number in decimal format
}complex;

// define function to print complex number
void show(complex complexNumber){
    printf("%0.2f + %0.2fj",complexNumber.real,complexNumber.imaginary);
}


int main() {
    printf(" complex numbers \n");
    
    // add values to compex number structure
    complex location={5.658,4.59};

    // call function to print
    show(location);


    
    return 0;
}