#include <stdio.h>

void print_numbers(void);

void print_numbers(void){

    for(int t = 0; t <= 9; t++){

        printf("%d",t);
        
    }
    printf("\n");
}

int main (void){

    print_numbers();
    return 0;
}