#include<stdio.h>

int main() {
    printf(" strings \n");

    // creating strings
    // method 01
    char string1[]={'s','t','r','i','n','g',1,'\0'};
    // method 02
    char string2[]="string2";
    // method pointer
    char *stringPointer="stringPointer";

    //pointers
    // creating and declaring pointer of strings
    char *pointer1=&string1[0];
    char *pointer2=string2;


    
    return 0;
}