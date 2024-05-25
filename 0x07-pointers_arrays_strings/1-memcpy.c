#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n){

    char *d = dest;
    char *s = src;

    for (int i = 0; i < n; i++){
        d[i] = s[i];
    }

    return *d;
}