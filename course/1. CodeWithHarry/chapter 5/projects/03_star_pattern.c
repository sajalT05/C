/*
// using recursion in function

*
***
*****
*******
*/

#include<stdio.h>

// star function prototype
void starPattern(int n);

int main() {
    printf(" star pattern problem \n");
        
    printf("Enter your line height number: ");
    int num;
    scanf("%d", &num);

    // calling star function to print stars
    starPattern(num);
    
    return 0;
}

// define star pattern function
/*
loop-->
1. first checked if n==1, if yes, single star is printed.
2. if not, then continued to next part.
3. same function is executed for (n-1).
4. command is executed for value of (n). stars are printed in  a row.


why to check value of n?
1. when value of n is iterated to 1 in recursion for starPattern(1)
2. starPattern(1), for loop will not print any stars.
3. starPattern(0), will again not print any stars.
4.  thus instruction given to print a single star.
*/

void starPattern(int n){
    // check if (n==1)
    if(n==1){
        printf("*\n");
        return;
    }
    //  recursion function
    starPattern(n-1);
    // print stars in a single row
    for(int a=0;a<(2*n-1);a++){
        printf("*");
    }
    // cretae a new line
    printf("\n");
}