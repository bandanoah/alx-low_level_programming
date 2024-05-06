#include <stdio.h>

int mul(int a, int b);

int mul(int a, int b){

    int r= a * b;
    printf("Product of %d and %d is : %d \n", a , b , r);

    return 1;
}

int main (void){

    mul(40,20);
    return 0;
}