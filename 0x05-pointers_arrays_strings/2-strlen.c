#include <stdio.h>
#include <string.h>
#include <cs50.h>

int _strlen(char *s);

int _strlen(char *s){

    int l =strlen(s);
    return l;
}

int main (void){

    char *t =get_string("what is the length of : \n");
    int p =_strlen(t);
    printf("length of %s is :%d\n", t,p);
    return 0;

}