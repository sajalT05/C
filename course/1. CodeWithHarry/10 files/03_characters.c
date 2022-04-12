#include<stdio.h>
#include<string.h>

int main() {
    printf(" read and write characters in files \n");
    
    // read character in file
    // create pointer of file
    // create a pointer to read file
    FILE *pointer_read;
    // store file in pointer
    // open file in read mode 
    pointer_read=fopen("sample.txt","r");
    // read first character from file
    // create a character variable
    char text=fgetc(pointer_read);
    // print characters of file stored in variable
    printf("%c",text);
    fclose(pointer_read);

    // write character in file
    // create pointer of file
    // create a pointer to write file
    FILE *pointer_write;
    // store file in pointer
    // open file in write mode 
    pointer_write=fopen("sample.txt","w");
    // create character variable
    char c='h';
    // write character to file
    fputc(c,pointer_write);
    fclose(pointer_write);


    return 0;
}