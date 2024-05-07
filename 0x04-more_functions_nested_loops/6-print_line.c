#include <stdio.h>

void print_line(int n);

void print_line(int n){

    int t;
    for (t = 0; t <= n; t++){
        printf("_");

        if (n == 0 || n < 0){
            printf("\n");
        }
    }
    printf("\n");
}
int main (void){

    print_line(40);

    return 0;
}