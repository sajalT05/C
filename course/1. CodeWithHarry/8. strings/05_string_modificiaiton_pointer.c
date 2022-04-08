#include<stdio.h>

int main() {
    printf(" string modification using pointer \n");
    char *pointer="string_name";
    printf("\n value stored in pointer: %s",pointer);
    // change value at pointer
    pointer="new_string_name";
    printf("\n new value stored in pointer: %s",pointer);
    return 0;
}  