#include <stdio.h>

char *_strcat(char *dest, char *src);

char *_strcat(char *dest, char *src){
    int i = 0;
    int d = 0;
    while (i != '\0'){
        dest[i];
        i++;
    }
    while (d != '\0')
    {
        dest[i] = src[d];
        i++;
        d++;
    }
    dest[i] = '\0';
    return dest;
}
int main (void){
    char d[50] = "Hello";
    char s[20] = "world";

    char *f=_strcat(d,s);
    printf("%s \n",f);

    return 0;
}