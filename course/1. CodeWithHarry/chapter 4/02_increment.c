/*
i++
    --> first print/define then increment

++i
    --> first increment then print/define


--> decrement

i--
    --> first print/define then decrement

--i
    --> first decrement then print/define
*/

#include<stdio.h>

int main() {
    printf(" increment \n ");
    // define value of i as 10
    int i=10;
    // print original value of i
    printf("\n original value of i is, %d", i);
    // increment on i
    /*
    1. first value of i is printed
    2. then value of i is increased by one.
    */
    printf("\n the value of i++ is, %d", i++);
    // value of i is increased by one.
    // print updated value of i
    printf("\n updated value of i is, %d", i);

    // define value of j as 10
    int j=10;
    // print original value of j
    printf("\n original value of j is, %d", j);
    // increment on j
    /*
    1. first value of j is increased by one
    2. then value of j is printed.
    */
    printf("\n the value of ++j is, %d", ++j);
    // print updated value of j
    printf("\n updated value of j is, %d", j);

    printf(" \n ");
    printf(" \n other numbers increment \n ");

    // other numbers
    // define a number
    int k=50;
    // original value of k
    printf("\n original value of k is, %d", k);   
    // increment by 10
    k+=10;
    printf("\n operation used: k+=10");
    // print updated value
    printf("\n the updated value of k is, %d", k);

    return 0;
}