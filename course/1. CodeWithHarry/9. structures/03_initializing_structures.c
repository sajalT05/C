#include<stdio.h>
#include<string.h>

// define a strcuture
struct structure{
    int code;
    float salary;
    char name[12];
};

int main() {
    printf(" initializing structures \n");

    // manual method
    // create a structure manual_variable
    struct structure manual_variable;
    manual_variable.code=10025;
    manual_variable.salary=6325.235;
    strcpy(manual_variable.name,"Sajal");

    // create a structure direct_variable
    struct structure direct_variable={131,6594664.65,"radheshyam"};
    // print direct method structre direct_variable details
    printf("\n direct_variable -->");
    printf("\n code of variable is, %d", direct_variable.code);
    printf("\n salary of variable is, %0.2f", direct_variable.salary);
    printf("\n name of variable is, %s", direct_variable.name);  

    // create a structure zero_variable
    // all variables values/elements set to 0.
    struct structure zero_variable={0}; 
    // print zero method structre zero_variable details
    printf("\n zero_variable -->");
    printf("\n code of variable is, %d", zero_variable.code);
    printf("\n salary of variable is, %0.2f", zero_variable.salary);
    printf("\n name of variable is, %s", zero_variable.name);  

    return 0;
}