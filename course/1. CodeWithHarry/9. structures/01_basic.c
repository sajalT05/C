#include<stdio.h>
#include<string.h>

// define a strcuture
struct structure{
    int code;
    float salary;
    char name[10];
};

int main() {
    printf(" structures basic \n");
    
    int a=55;
    char b='k';
    float c=98.23;
    // define structure variable
    struct structure variable;
    variable.code=10025;
    variable.salary=6325.235;
    strcpy(variable.name,"Sajal");

    // print defined structre variable details
    printf("\n variable -->");
    printf("\n code of variable is, %d", variable.code);
    printf("\n salary of variable is, %0.2f", variable.salary);
    printf("\n name of variable is, %s", variable.name);

    // take input from user
    // create structure variable
    struct structure variable_userInput;
    // take input for structure variable details
    printf("\n\n take input from user -->");
    printf("\n Enter variable_userInput code: ");
    scanf("%d", &variable_userInput.code);
    printf(" Enter variable_userInput salary: ");
    scanf("%f", &variable_userInput.salary);
    printf(" Enter variable_userInput name: ");
    scanf("%s", variable_userInput.name);

    // print user input structre variable details
    printf("\n variable_userInput -->");
    printf("\n code of variable is, %d", variable_userInput.code);
    printf("\n salary of variable is, %0.2f", variable_userInput.salary);
    printf("\n name of variable is, %s", variable_userInput.name);

    
    return 0;
}