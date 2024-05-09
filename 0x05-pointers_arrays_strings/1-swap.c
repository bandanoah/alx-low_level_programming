#include <stdio.h>

void swap_int(int *a, int *b);

void swap_int(int *a, int *b){
    *a = 402;
    *b = 98;
}

int main (void){
    int a = 98;
    int b = 402;

    printf("a=%d, b=%d\n",a,b);
    swap_int(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}