#include <stdio.h>

void jack_bauer(void);

void jack_bauer(void){

    int h,m;

    for(h = 0; h < 24; h++){

        for (m = 0; m < 60; m++){
            
            putchar('0' + h/10);
            putchar('0' + h %10);
            putchar(':');
            putchar('0' + m /10);
            putchar('0' + m %10);
            putchar('\n');
        }

       
    }
    
        
}

int main (void){

    jack_bauer();

    return 0;
}