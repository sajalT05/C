#include<stdio.h>
#include<string.h>

// define a strcuture
struct structure{
    int code;
    float salary;
    char name[10];
};

// define a new structure
// 'struct newStructure' can be replaced with 'strct'
typedef struct newStructure{
    int code;
    float salary;
    char name[10];
}strct;

// create a function with newStructure
void show(strct variableName){
    // print output 
    printf("\n code of structure variable is, %d",variableName.code);
    printf("\n code of structure variable is, %f",variableName.salary);
    printf("\n code of structure variable is, %s",variableName.name);
}


int main() {
    printf(" typedef keyword \n");

    // create structure instances to newStructure
    // variable
    strct variable;
    // pointer
    strct *pointer;

    // relate pointer to the variable
    pointer=&variable;

    // add elements to structure variables
    pointer->code=135;
    pointer->salary=656565.656;
    strcpy(pointer->name,"mohanni");

    // call functions
    show(variable);





    return 0;
}