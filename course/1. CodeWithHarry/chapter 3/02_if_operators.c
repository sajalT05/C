#include<stdio.h>

int main() {
printf("check even or odd");
printf("\nEnter a number: ");
int n;
scanf("%d", &n);

// check odd or even

if (n % 2 == 0){
    printf("\n%d is even", n);
}
else{
    printf("\n%d is odd", n);
}

// check greater than 5 or not
if(n>5){
    printf("\n%d is greater than 5", n);
}
else{
    printf("\n%d is less than 5", n);
}

// check between 5 to 10 or not
if (n>5 && n<10){
    printf("\n%d is between 5 and 10", n);
}
else{
    printf("\n%d is not between 5 and 10", n);
}

// check greater than or equals to 10 or not
if  (n>=10){
    printf("\n%d is greater than or equals to 10", n);
}
else{
    printf("\n%d is less than 10", n);
}


return 0;
}