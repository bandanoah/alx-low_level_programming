#include <stdio.h>

void print_square(int size);

void print_square(int size){

    int i;
    for (i = 1; i <= size; i ++){
        
        int j;
        for (j =1; j <= size; j++){
        printf("#");
        }
        printf("\n");
        

    }
}

int main (void){

    print_square(2);

    return 0;
}