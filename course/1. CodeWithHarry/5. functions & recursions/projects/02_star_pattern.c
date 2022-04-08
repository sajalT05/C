/*
*
***
*****
*******
*/

#include<stdio.h>

// star function prototype
void starPattern(int n);

int main() {
    printf(" star pattern problem \n ");
        
    printf("Enter your line height number: ");
    int num;
    scanf("%d", &num);

    // calling star function to print stars
    starPattern(num);
    
    return 0;
}

// define star pattern function
void starPattern(int n){
    // creating length of star pattern
    // n is length of pattern, starting from 0
    for(int a=1;a<=n;a++){
        // creating width of single row of pattern
        for(int b=0;b<a;b++){
            // print number of stars in a row
            printf("*");
        }
        // print next set of stars in next line
        printf("\n");
    }
}