/*
storing marks of 5 subjects and print
store values in an array
use loop method
show marks in the array
*/

#include<stdio.h>

int main() {
    printf(" store marks of a student in 5 subjects \n");
    
    // declare array of 5 elements
    int marks[5];

    // user input get marks of students
    for(int i=0;i<5;i++){
            
        printf("Enter marks in %d subject: ", i+1);
        scanf("%d", &marks[i]);
    
    }

    // print marks of students
    for(int i=0;i<5;i++){
    printf("\n marks of students in %d subject is: %d", i+1,marks[i]);
    }

    return 0;
}