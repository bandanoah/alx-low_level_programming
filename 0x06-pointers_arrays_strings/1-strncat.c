#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n);

char *_strncat(char *dest, char *src, int n){

    int i = 0;
    int d = 0;

    while (dest[i] != '\0'){
        dest[i];
        i++;
    }

    int t =strlen(src);
    n = 1024;
    while (t <= n && src[d] != '\0'){
        dest[i] = src[d];
        i++;
        d++;
    }
    dest[i] = '\0';

    return dest;

}

int main (void){
    char s1 [98] = "Hello ";
    char s2 [] = "World!\n";

    char *res;
    res = _strncat(s1,s2,1024);
    printf("%s",res);

    return 0;
}