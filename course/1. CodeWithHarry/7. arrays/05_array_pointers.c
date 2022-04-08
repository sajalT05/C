#include<stdio.h>

int main() {
    printf(" array pointers \n");
    
    // integer array
    int array[3]={1,2,3};

    // pointer and declaration for array element value address
    printf("\n\npointer and declaration for array element value address.");
    /*
    
    int *p=&array[0];
    int *p=array;

    */

    int *p=&array[0];

    // print pointer address and value stored
    printf("\n address of pointer is: %d",p);
    printf("\n array element store in pointer is: %d",*p);

    // increase pointer address by 1 integer
    printf("\n\n increase pointer address by 1 integer [p++]");
    p++;
    printf("\n address of updated pointer is: %d",p);
    printf("\n new array element store in updated pointer is: %d",*p);

    // increase pointer address by 1 integer
    printf("\n\n again increase pointer address by 1 integer [p++]");
    p++;
    printf("\n address of again updated pointer is: %d",p);
    printf("\n new array element store in again updated pointer is: %d",*p);

    // bringing pointer to default position
    p-=2;

    // print elements of array using pointer
    printf("\n\n print elements of array using pointer.");
    printf("\n array element store in pointer is: %d",*p);

    return 0;
}