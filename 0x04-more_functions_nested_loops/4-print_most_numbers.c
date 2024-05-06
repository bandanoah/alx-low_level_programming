#include <stdio.h>

void print_most_numbers(void);

void print_most_numbers(void){

    for (int t = 0; t <= 9; t++){
        if (t != 2 && t != 4){

            printf("%d",t);
        }        
    }
    printf("\n");

}
   
int main (void){
    print_most_numbers();
    return 0;
}