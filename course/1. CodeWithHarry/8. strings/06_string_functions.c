#include<stdio.h>
#include<string.h>

int main() {
    printf(" string functions \n");
    
    char stringName[]="man";
    char stringName2[]="me";
    char stringName3[150]="happy";

    // length of string
    int stringLength=strlen(stringName);
    printf("\n length of string,stringName[]: %d",stringLength);

    // copy string
    printf("\n\n copy string-->");
    strcpy(stringName2,stringName);
    printf("\n updated string after strcpy(),stringName1[]: %s", stringName2);

    // concatenate string
    printf("\n\n concatenate string-->");
    char stringNamenew[]="_man";
    strcat(stringName3,stringNamenew);
    printf("\n updated string after strcat(),stringName3[]: %s", stringName3);

    // compare strings
    printf("\n\n compare strings-->");
    char stringName01[]="life";
    char stringName02[]="banana";
    char stringName03[]="sweet";
    char stringName04[]="life";
    int a,b,c;
    a=strcmp(stringName01,stringName02);
    b=strcmp(stringName01,stringName03);
    c=strcmp(stringName01,stringName04);
    printf("\n comparison for strings(stringName01,stringName02) is, %d",a);
    printf("\n comparison for strings(stringName01,stringName03) is, %d",b);
    printf("\n comparison for strings(stringName01,stringName04) is, %d",c);

    
    return 0;
}