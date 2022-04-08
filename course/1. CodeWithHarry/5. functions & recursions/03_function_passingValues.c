#include<stdio.h>

// function prototype
int sum(int a,int b);

int main() {
    printf(" passing values in a function \n ");
    // calling function and assign to a new variables
    int c=sum(3,9);
    printf("the value of sum(9,3) i.e. c is, %d",c);

    return 0;
}

// function definition
/*
** this is a function --> int sum(int a, int b)
** these are the parameters --> int a, int b
** this is the return value --> int --> returns integer
*/
int sum(int a, int b){
    int sum=a+b;
    return sum;
}