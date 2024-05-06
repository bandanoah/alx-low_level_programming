#include <stdio.h>

void print_times_table(int n);

void print_times_table(int n){

    if (n > 15 && n < 0){

        return;
    } 

    int i,j;
    for (i = 0; i <= n; i++){
        for( j = 0; j <= n; j++){
                
                int k = i *j;

                if (k < 10){
                    printf("%d,   ", k);
                }else if (k < 100)
                {
                    printf("%d,  ",k);
                }else{
                    printf("%d, ",k);                   
                }              
            
            }
            printf("\n");

        }

}


int main (void){

    print_times_table(12);

    return 0;
}