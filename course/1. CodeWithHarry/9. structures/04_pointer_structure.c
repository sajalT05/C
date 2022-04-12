#include<stdio.h>
#include<string.h>

// define a strcuture
struct structure{
    int code;
    float salary;
    char name[10];
};

int main() {
    printf(" pointer to structure variable \n");

    // create structure variable instance
    struct structure pointer_variable;

    // create structure variable pointer
    struct structure *pointer;
    
    // relate pointer to variable instances
    pointer=&pointer_variable;

    // add details to variable using pointer
    (*pointer).code=11;
    pointer->salary=1165.232;
    strcpy((*pointer).name,"sita");

    // print structre variable details
    printf("\n pointer_variable -->");
    printf("\n code of variable is, %d", pointer_variable.code);
    printf("\n salary of variable is, %0.2f", pointer_variable.salary);
    printf("\n name of variable is, %s", pointer_variable.name); 

    // print structre variable details usign pointer
    printf("\n (*pointer) -->");
    printf("\n code of variable is, %d", pointer->code);
    printf("\n salary of variable is, %0.2f", pointer->salary);
    printf("\n name of variable is, %s", pointer->name); 
      

    return 0;
}