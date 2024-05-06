#include <stdio.h>

void time_table(void);

void time_table(void){
    
    int i,j;

    for (i =0; i < 10; i++){

        for (j = 0; j < 10; j++){

            int r = i * j;

            if (r < 10){

                printf("%d,  ",r);
            }

            if (r > 10){

                printf("%d, ",r);
            }
        }
        printf("\n");
    }
}

int main (void){

    time_table();

    return 0;
}