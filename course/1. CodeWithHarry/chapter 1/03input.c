# include<stdio.h>

int main(){
    printf("recieving input from user \n");
    // define variables
    int a;
    float b;
    char c;
    // take inputs
    // integer
    printf("enter your integer: \n");
    // assign integer value to a
    scanf("%d" , &a);
    printf("your integer is %d. \n",a);
    // floats
    printf("enter your float: \n");
    // assign integer value to a
    scanf("%f" , &b);
    printf("your float is %f. \n",b);
    // character
    printf("enter your character: \n");
    // assign integer value to a
    scanf("%c" , &c);
    printf("your character is %c. \n",c);


    return 0;
}