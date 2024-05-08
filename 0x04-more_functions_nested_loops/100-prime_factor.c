#include <stdio.h>

int main (void){

    long num = 612852475143;
    int divisor = 2;
    int lar_prim = 0;

    while (num != 1){
        if(num %divisor == 0){
            num = num / divisor;
            lar_prim = divisor;
        }
         divisor ++;
    }
    printf("%d ",lar_prim);
    printf("\n");
    return 0;
}