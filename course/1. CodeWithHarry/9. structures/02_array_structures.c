#include<stdio.h>
#include<string.h>

// define a strcuture
struct structure{
    int code;
    float salary;
    char name[10];
};


int main() {
    printf(" array of structures \n");
    
    struct structure variable_array[3];

    // define variable_array details in structure
    variable_array[0].code=101;
    variable_array[1].code=102;
    variable_array[2].code=103;
    variable_array[0].salary=5656.2323;
    variable_array[1].salary=98.2323;
    variable_array[2].salary=5656.62;
    strcpy(variable_array[0].name,"mohan");
    strcpy(variable_array[1].name,"shyam");
    strcpy(variable_array[2].name,"krishna");

    // print defined structre variable_array details
    printf("\n variable_array[] -->");
    printf("\n code of variable_array[0] is, %d", variable_array[0].code);
    printf("\n salary of variable_array[0] is, %f", variable_array[0].salary);
    printf("\n name of variable_array[0] is, %s", variable_array[0].name);
    printf("\n code of variable_array[1] is, %d", variable_array[0].code);
    printf("\n salary of variable_array[1] is, %f", variable_array[0].salary);
    printf("\n name of variable_array[1] is, %s", variable_array[0].name);
    printf("\n code of variable_array[2] is, %d", variable_array[0].code);
    printf("\n salary of variable_array[2] is, %f", variable_array[0].salary);
    printf("\n name of variable_array[2] is, %s", variable_array[0].name);

    

    return 0;
}