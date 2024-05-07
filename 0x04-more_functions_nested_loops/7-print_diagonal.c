#include <stdio.h>

void print_diagonal(int n);

void print_diagonal(int n){

    int t;
    for (t = 0; t <= n; t++){
        printf("\\\n");
        int s;
        for(s =0; s <= t; s++){
            printf(" ");
        }
        if (n == 0 || n < 0){
            printf("\n");
        }
    }
    printf("\n");

}
int main (void){

    print_diagonal(55);

    return 0;
}