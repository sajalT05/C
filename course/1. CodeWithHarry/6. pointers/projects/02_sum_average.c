/*
find sum and average of two input numbers and store dynamically
*/

#include<stdio.h>

// sum and average function
void sum_average(int i,int j,int *sum,float *avg);

int main() {
    printf(" sum and average, dynamically store in function \n");
    
    int num1,num2,summation;
    float average;


    // take input from user 
    printf("\n Enter your first number: ");
    scanf("%d", &num1);
    printf(" Enter your second number: ");
    scanf("%d", &num2);

    // call function
    sum_average(num1,num2,&summation,&average);

    // print output
    printf("\n summation of numbers is, %d", summation);
    printf("\n average of numbers is, %f", average);



    return 0;
}

// sum and average function definition
/*
1. takes two inetgers as arguments

*/
void sum_average(int i,int j,int *sum,float *avg){
    *sum=i+j;
    *avg=(float)(*sum)/2;
}