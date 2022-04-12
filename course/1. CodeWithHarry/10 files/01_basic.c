#include<stdio.h>
#include<string.h>

int main() {
    printf(" files basic \n");
    
    // create pointer of file
    FILE *pointer;
    // store file in pointer 
    pointer=fopen("sample.txt","r");

    return 0;
}