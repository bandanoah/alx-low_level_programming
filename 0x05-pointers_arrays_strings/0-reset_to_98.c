#include <stdio.h>

void reset_to_98(int *n);

void reset_to_98(int *n){

    *n = 98;    
}
int main (void){
    int n = 402;
    printf("value of n:%d \n",n);
    reset_to_98(&n);
    printf("value of n:%d \n", n);
}