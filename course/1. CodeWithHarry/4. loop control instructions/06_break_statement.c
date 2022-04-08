#include<stdio.h>

int main() {
    printf(" break statement \n  ");
    // create a loop, till 10, increase by 1
    for (int n = 0; n<=10; n++){
        printf("\n n=%d",n);
        // condition for breaking at 8
        if (n==8){
            // break command to break loop
            printf("\n\t break command used");
            break;
        }
        printf("\n\t loop working");
    }
    return 0;
}