#include<stdio.h>
#include<string.h>

int main() {
    printf(" read complete text from files \n End of file \n");
    
    // create file pointer
    FILE *pointer_read;
    // assign pointer to file read mode
    pointer_read=fopen("sample.txt","r");

    // create a character variable to read character in files
    char character;
    character=fgetc(pointer_read);

    // read files completely
    // while loop
    while(character!=EOF){
        printf("%c",character);
        // again assign character variable to next character present in file
        character=fgetc(pointer_read);
    }

    return 0;
}