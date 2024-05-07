#include <stdio.h>

void print_triangle(int size);

void print_triangle(int size){

    int i;
    for (i = 1; i <= size; i++){
        for (int j = 1; j <= size - i; j++){
            printf(" ");
            /*this for loop is the difference btwn the normal
            loop alignment and this one adding the - i especially
            affords the loop to fit perfectly*/
        }
        for (int k = 1; k <= i; k ++){
            printf("#");
        }
        printf("\n"); 
    }
}

int main (void){

    print_triangle(10);

    return 0;
}