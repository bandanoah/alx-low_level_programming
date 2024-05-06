#include <stdio.h>

int main (void){

    int i = 0;
    int j = 1;
    int k = 0;
    int sum = 0;

    while (k < 4000000){

        k = i + j;
        i = j;
        j = k;

        if (k % 2 == 0){
            sum += k;
        }
    }
    printf("%d \n",sum);
}