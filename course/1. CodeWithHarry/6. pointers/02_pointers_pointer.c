#include<stdio.h>

int main() {
    printf(" pointers \n ");
    // declare an integer variable with value
    int i=51;
    // declare an int type pointer and store address of integer varaible
    // j will store address of i
    int *j=&i;
    // declare an int type pointer and store address of the pointer
    // k will store address of     
    int **k = &j;

    // value of i
    printf("\n\n value of i -->");
    printf("\n value of i is (i), %d",i);
    printf("\n value of i is (*(&i)), %d",*(&i));
    printf("\n value of i is (*j), %d",*j);
    printf("\n value of i is (**(&j)), %d",**(&j));
    printf("\n value of i is (**k)), %d",**k);
    printf("\n value of i is (***(&k))), %d",***(&k));

    // address of i
    printf("\n\n address of i -->");
    printf("\n address of i is (&i), %u",&i);
    printf("\n address of i is (j), %u",j);
    printf("\n address of i is (*k), %u",j);

    // value of j
    printf("\n\n value of j -->");
    printf("\n value of j is (&i)), %d",&i);
    printf("\n value of j is (*(&j)), %d",*(&j));
    printf("\n value of j is (*k)), %d",*k);

    // address of j
    printf("\n\n address of j -->");
    printf("\n address of j is (&j), %u",&j);
    printf("\n address of j is (k)), %u",k);

    // value of k
    printf("\n\n value of k -->");
    printf("\n value of k is (&j)), %u",&j);
    printf("\n value of k is (*(&k)), %u",*(&k));

    // address of k
    printf("\n\n address of k -->");
    printf("\n address of k is (&k), %u",&k);

    return 0;
}