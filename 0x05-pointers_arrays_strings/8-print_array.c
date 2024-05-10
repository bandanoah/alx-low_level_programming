#include <stdio.h>

void print_array(int *a, int n);

void print_array(int *a, int n){
    a[n];
    for (int i =0; i < n; i++){
        printf("%d ", a[i]);
    } 
    printf("\n"); 
}
int main (void){
    
    int array [5];
    array [0] = 100;
    array [1] = 200;
    array [2] = 300;
    array [4] = 400;

    print_array(array,3);
    return 0;
}