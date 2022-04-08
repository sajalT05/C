#include<stdio.h>

int main() {
    printf(" increment and decrement \n");

    // integer
    printf("\n integer -->");
    int integer=3;
    int *pointer_integer=&integer;
    printf("\n value of poisnter, %u",pointer_integer);
    // increase pointer value by 1 integer address
    pointer_integer++;
    printf("\n updated value of pointer[after increasing by 1 integer address], %u",pointer_integer);
    // decrease pointer by 1 integer address
    pointer_integer--;
    printf("\n updated value of pointer[after decreasing by 1 integer address], %u",pointer_integer);
    // increase pointer value by 3 integer address
    pointer_integer+=3;
    printf("\n updated value of pointer\[after increasing by 3 integer address], %u",pointer_integer);

    // float
    printf("\n\n float -->");
    float decimal=5.2;
    float *pointer_float=&decimal; //pointer type will be stored value type
    printf("\n value of pointer, %u",pointer_float);
    // increase pointer value by 1 float address
    pointer_float++ ;
    printf("\n updated value of pointer[after increasing by 1 float address], %u",pointer_float);

    // character
    printf("\n\n character -->");
    float character='h';
    char *pointer_character=&character; //pointer type will be stored value type
    printf("\n value of pointer, %u",pointer_character);
    // increase pointer value by 1 float address
    pointer_character++;
    printf("\n updated value of pointer[after increasing by 1 float address], %u",pointer_character);


    return 0;
}