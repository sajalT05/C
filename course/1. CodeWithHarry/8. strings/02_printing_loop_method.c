#include<stdio.h>

int main() {
    printf(" printing strings with loop method \n");
    
    // create string
    char string[]="man";

    // loops
    int i=0;
    // while loop
    printf("\nwhile loop--> \n");
    while(i<3){
        printf("%c",string[i]);
        i++;
    }
    // while loop(length not defined)
    printf("\nwhile loop(length not defined)--> \n");
    while(string[i]!='\0'){
        printf("%c",string[i]);
        i++;
    }
    // while loop(pointers)
    printf("\nwhile loop(pointers)--> \n");
    int *pointer=string;
    while(*pointer!='\0'){
        printf("%c",*pointer);
        pointer++;
    }

    // for loop
    printf("\nfor loop--> \n");
    for (i = 0; i < 3; i++)
    {
        printf("%c",string[i]);
    }

    // // do-while loop
    // printf("\ndo-while loop--> \n");
    
    // do
    // {
    //     int n=0;
    //     printf("%c",string[n]);
    //     n++;
    // } while (<3);
    
    


    return 0;
}