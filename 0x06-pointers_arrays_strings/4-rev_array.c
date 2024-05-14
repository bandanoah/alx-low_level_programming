#include <stdio.h>

void reverse_array(int *a, int n);

void reverse_array(int *a, int n){

    int i = 0;
    int *k = a + n -1;// to calculate the last digit in the array
    for (i = n -1; i >= 0; i--){// for loop that iterates backwards 
        printf("%d",*(k - i));
    }
    printf("\n");
}
int main (void){
    int a[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    reverse_array(a,10);
    
    return 0;
}