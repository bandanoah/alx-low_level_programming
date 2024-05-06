#include <stdio.h>

void print_alphabet(void);

int main (void){

    int n =0;

    while(n < 10){

        print_alphabet();
        putchar('\n');
        n++;

    }
    
}

void print_alphabet(void){

    int n = 'a';

    for (n = 'a'; n <= 'z'; n++){

        putchar(n);

    }
    
}

