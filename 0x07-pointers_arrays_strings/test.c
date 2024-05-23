#include <stdio.h>

int main (void){

    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("a:%d,%d,%d\n",a,*p,**q);
    printf("Address of p:%p or %p\n",&p,q);

    int t = sizeof(**q);
    printf("size of Q: %d",t);
}