#include<stdio.h>
// function prototype
void valueSwap(int a, int b);  //  call by value --> dummy
void referenceSwap(int *a, int *b); //  call by reference --> working

int main() {
    printf(" swapping values \n ");
    int x=5,y=9;
    // check values before swapping
    printf("\n value of a and b before swapping is, a=%d : b=%d.",x,y);

    // call functions
    // value swapping
    // valueSwap(x,y); // not working // values not swapped
    // reference swapping
    referenceSwap(&x,&y); // working

    // check values after swapping
    printf("\n value of a and b after swapping is, a=%d : b=%d.",x,y);

    return 0;
}

// value swapping function
void valueSwap(int a, int b){
/*
1. store value of a in a temp variable. temp = a
2. store value of b in a. a = b
3. store temp variable value i.e. pre value of a in b. b = temp
*/
    int temp=a;
    a=b;
    b=temp;
}

// reference swapping function
void referenceSwap(int *a, int *b){
/*
1. store address of a, i.e. pointer *a in a temp variable. temp = *a
2. store address of b, i.e. pointer *b in pointer *a. *a = *b
3. store temp variable value i.e. pre value of pointer *a in pointer *b. *b = temp
*/
    int temp=*a;
    *a = *b;
    *b=temp;

}