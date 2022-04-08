#include<stdio.h>

int main() {
    printf(" pointers \n ");
    // declare an integer variable with value
    int i=51;
    // declare an int type pointer and store address of integer varaible
    // j will store address of i
    int *j=&i;
    // value of i
    printf("\n\n value of i");
    printf("\n value of i is (i), %d",i);
    printf("\n value of i is (*j), %d",*j);
    printf("\n value of i is (*(&i)), %d",*(&i));
    // address of i
    printf("\n\n address of i");
    printf("\n address of i is (j), %u",j);
    printf("\n address of i is (&i), %u",&i);
    // value of j
    printf("\n\n value of j");
    printf("\n value of j is (*(&j)), %d",*(&j));
    // address of js
    printf("\n\n address of j");
    printf("\n address of j is (&j), %u",&j);

    return 0;
}