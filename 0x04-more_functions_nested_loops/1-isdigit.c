#include <stdio.h>

int _isdigit(int c);

int _isdigit(int c){

    int t;
    if (t >= 0 && t <= 9 ){
        
        printf("is a digit");
        return 1;
    }else {
        printf("is not a digit");
        return 0;
    }
    printf("\n");
}

int main (void){

    _isdigit(7);
    return 0;
}