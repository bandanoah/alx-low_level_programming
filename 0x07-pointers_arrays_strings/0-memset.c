#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);

char *_memset(char *s, char b, unsigned int n){

    int i = 0;
    for (i = 0; i < n; i ++){
        s[i] = b;
    }
    return s;
}

int main (void){
    char array[100];

    char *t =_memset(array, 'x', 50);
    printf("%s\n",t);
}