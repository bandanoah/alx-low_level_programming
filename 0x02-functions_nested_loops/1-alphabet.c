/*#include "main.h"

void print_alphabet(void);


void print_alphabet(void){

    int n= 'a';

    for (n = 'a'; n <= 'z'; n++){

        _putchar('n');
    }
}
*/

#include <stdio.h>

void print_alphabet(void);

int main (void){

    print_alphabet();
    putchar('\n');
}

void print_alphabet(void){

    int n = 'a';

    for (n = 'a'; n <= 'z'; n++){

        putchar(n);

    }
    
}