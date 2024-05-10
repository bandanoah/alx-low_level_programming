#include <stdio.h>
#include <string.h>

char *_strcpy(char *dest, char *src);

char *_strcpy(char *dest, char *src){
    int l = strlen(src);
    for (int i = 0; i <= l; i++){
        dest = src;
        printf("%C",dest[i]);
    }
    printf("\n");
}
int main (void){
    char *src = "Hello world";
    char *dest;

    _strcpy(dest,src);
    return 0;
}