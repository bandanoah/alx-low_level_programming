#include <stdio.h>

void print_to_98(int n);

void print_to_98(int n){

    int t;
    for (t = n; t <= 98; t++){

        printf("%d, ", t);
        
        if (t ==98){
            printf("%d", t);
        }
    }
    printf("\n");
}

int main (void){
    
    print_to_98(10);
    return 0;

}