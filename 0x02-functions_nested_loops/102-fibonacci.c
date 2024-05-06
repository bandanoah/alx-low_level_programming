#include <stdio.h>

void print_fibonacci_numbers(void);

void print_fibonacci_numbers(void){

    int count = 50;

    int i = 1;
    int j = 2;

    printf("%d, %d, ", i ,j);

    for (int t =3; t <= count; t++){

        int k = i + j;
        
        printf("%d, ", k);
        i = j;
        j = k;

    }
    printf("\n");
}

int main (void){

    print_fibonacci_numbers();

    return 0;
}