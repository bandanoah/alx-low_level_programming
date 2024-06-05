#include <stdio.h>
/*
This is another representation of the recursive function that 
calls itself continously
*/

int fibonacci(int i){
    //this is a base case
    if (i == 0){
        return 0;
    }
    // also a base case
    if (i == 1){
        return 1;
    }
    //for any other value the function calls itsel recursively
    //to compute the sum of the two preceding fibonacci numbers
    return fibonacci(i - 1) + fibonacci(i - 2);
}
int main (void){
    int i;
    // a for loop that feed the fibonacci function with numbers
    for (i = 0; i < 20; i++){
        
        printf("%d\t\n", fibonacci(i));
    }
    return 0;
}