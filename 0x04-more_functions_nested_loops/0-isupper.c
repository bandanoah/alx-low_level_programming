#include <stdio.h>

int _isupper(int c);

int _isupper(int c){

    int t = 'A';

    if (c >='A' && c <='Z'){
        printf("is upper");
        return 1;
    }else{
        printf("is lower");
        return 0;
    }
    printf("\n");
}
int main (void){

    _isupper('M');

    return 0;

}