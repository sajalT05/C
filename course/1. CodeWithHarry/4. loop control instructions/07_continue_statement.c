#include<stdio.h>

int main() {
    printf(" break statement \n  ");
    // create a loop, till 10, increase by 1
    for (int n = 0; n<=10; n++){
        // condition to skip any execution for n from 3 to 5 
        if (n>2 && n<7){
            // break command to break loop
            printf("\n\t continue statement used for value of n:%d",n);
            continue;
        }
        printf("\n n=%d",n);
        printf("\n\t loop running for n:%d",n);
    }
    return 0;
}