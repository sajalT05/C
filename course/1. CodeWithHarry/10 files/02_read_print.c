#include<stdio.h>
#include<string.h>

int main() {
    printf(" read and print from files \n");
    
    // create pointer of file
    // create a pointer to read file
    FILE *pointer_read;
    // store file in pointer
    // open file in read mode 
    pointer_read=fopen("sample.txt","r");

    // scan first integer from file // first occuring
    int num;
    fscanf(pointer_read,"%d",&num);
    // print first integer from file
    printf(" \n first integer from file: %d",num);
    // scan first float from file // first occuring
    int num2;
    fscanf(pointer_read,"%f",&num2);
    // print first float from file
    printf(" \n first float from file: %f",num2);
    // scan first string from file // first occuring
    char text[50];
    fscanf(pointer_read,"%s",text);
    // print first integer from file
    printf(" \n first string from file: %s",text);
    fclose(pointer_read);

    // write files
    // create pointer of file
    // create a pointer to write file
    FILE *pointer_write;
    // store file in pointer
    // open file in write mode 
    pointer_write=fopen("sample.txt","w");
    // create variables
    int number=464;
    float decimal=464.323;
    fprintf(pointer_write,"write in files\n%d\n%f\n",number,decimal);
    fclose(pointer_write);




    return 0;
}