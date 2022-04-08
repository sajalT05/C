/*
find nth element of a fibonacci series
*/

#include<stdio.h>
// fibonaci recursive function prototype
int fibonacci(int num);

int main() {
    printf(" statement ");
    int number;
    printf("Enter your number: ");
    scanf("%d",&number);
    // call fibonaci recursive function
    // assign nElement to the return value
    int nElement=fibonacci(number);
    printf("the %d element of fibonacci series is, %d",number, nElement);
    return 0;
}

// fibonaci recursive function definition
int fibonacci(int num){
    switch (num)
    {
    case 0:
        return 1;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return 1;
        break;
    default:
        // next number is sum of previous two numbers
        return fibonacci(num-1)+fibonacci(num-2);
        break;
    }

}

