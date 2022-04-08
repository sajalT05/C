#include<stdio.h>

int main() {
    printf(" operations on pointer \n");

    // creating first integer variable
    int num=105;
    // storing address of first integer variabel
    int *pointer=&num;
    printf("\n value of pointer: %d", pointer);

    // addition of a number to a pointer
    printf("\n addition of a number to a pointer[pointer+=5],%d", pointer+=5);

    // bringing pointer to base value
    pointer-=5;

    // substraction of a number to a pointer
    printf("\n substraction of a number to a pointer[pointer-=5],%d", pointer-=5); 

    // bringing pointer to base value
    pointer+=5;     

    // creating second integer variable
    int num_new=105;
    // storing address of first integer variabel
    int *pointer_new=&num_new;
    printf("\n\n value of new pointer: %d", pointer_new);

    // difference of two pointers
    printf("\n\ndifference of two pointers");
    printf("\ndifference of pointers[pointer-pointer_new]: %d", pointer-pointer_new);

   // comparison of pointers
   printf("\n\ncomparison of two pointers.");
   if ((pointer==pointer_new))
   {
       printf("\npointer is equal to pointer_new.");
   }
   else if ((pointer>pointer_new))
   {
       printf("\npointer is greater than pointer_new.");
   }
   else if ((pointer<pointer_new))
   {
       printf("\npointer is less than pointer_new.");
   }
   
    return 0;
}