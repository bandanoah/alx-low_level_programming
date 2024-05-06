#include <stdio.h>

int add(int, int);

int add(int i, int j){

    int result = i + j;

    printf("%d\n", result);

    return result;
}

int main (void){

    add( 8, 9);

    return 0;

}