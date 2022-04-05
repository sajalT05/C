#include<stdio.h>

int main() {
    printf("check even or odd");
    printf("\nEnter a number, between 1 to 5: ");
    int n;
    scanf("%d", &n);

    // check numbers

    if (n==1){
        printf("\n%d is one", n);
    }
    else if (n==2){
        printf("\n%d is two", n);
    }
    else if (n==3){
        printf("\n%d is three", n);
    }
    else if (n==4){
        printf("\n%d is four", n);
    }
    else if (n==5){
        printf("\n%d is five", n);
    }
    else{
        printf("\n%d is not between 1 to 5", n);
    }
    return  0;
}
