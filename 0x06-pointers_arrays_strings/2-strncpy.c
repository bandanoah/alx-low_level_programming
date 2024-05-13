#include <stdio.h>
#include <string.h>

char *_strncpy(char *dest,char *src, int n);

char *_strncpy(char *dest,char *src, int n){

    int i = 0;
    int j = 0;

    while(dest[i] != '\0'){
        i++;
    }
    int t = strlen(src);
    while(src[j] != '\0' && t < n){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;
}

int main (void){

    char s1 [100];
    char s2 [] = "The weather today is wonderful ";
    
    char *copy = _strncpy(s1,s2,90);
    printf("%s\n",copy);
    return 0;
}