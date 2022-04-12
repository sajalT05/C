#include<stdio.h>
#include<string.h>

// define a strcuture
struct structure{
    int code;
    float salary;
    char name[10];
};

// create a function
void show(struct structure variableName){
    // print output 
    printf("\n code of structure variable is, %d",variableName.code);
    printf("\n code of structure variable is, %f",variableName.salary);
    printf("\n code of structure variable is, %s",variableName.name);
}

int main() {
    printf(" show functions and structures \n");

    // define structure variable
    struct structure variable;
    variable.code=10025;
    variable.salary=6325.235;
    strcpy(variable.name,"Sajal");

    // call function
    show(variable);
    
    return 0;
}