#include<stdio.h>
// funciton prototype
// recursive function
int factorial();

int main() {
    printf(" recursive function \n ");
    
    // call recursive function
    int number=5;
    int factorialNumber=factorial(number);
    printf("\n the factorial of %d, is %d", number,factorialNumber);

    return 0;
}

// recursive function definition
// returns integer
// takes argument in integer num parameter
int factorial(int num){
    // if i is 0 or one, return value of one.
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}