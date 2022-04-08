#include<stdio.h>

int main() {
    printf(" do while loop \n ");
    int i=1;
    do
    {
        // print value
        printf("\n i=%d",i);
        // increase value of i by 2
        i++;
    } 
    // create condition
    // i<10
    while (i<=10);

    return 0;
}