#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


int _abs(int);

int main (void){

    int i= get_int(" what is the num:  ");

    int abs_num =_abs(i);

    printf("The absolute value of %d is %d\n",i , abs_num);

    return 0;

}
int _abs(int t){

    int num = abs(t);

    return num;
}