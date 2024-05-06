#include <stdio.h>

int main (void){

    int i = 1;
    int j = 2;

    printf("%d, %d, ", i ,j);

    int t;
    int k;

    for (t = 3; t <= 98; t++){

        k = i + j;
        printf("%d, ", k);
        i = j;
        j = k;

    }
    printf("\n");
}