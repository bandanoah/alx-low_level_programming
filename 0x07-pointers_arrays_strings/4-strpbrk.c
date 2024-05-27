#include <stdio.h>
/*

*/

char *_strpbrk(char *s, char *accept);

char *_strpbrk(char *s, char *accept){
    int i,j,count;
    for (j = 0; s[j]!= '\0'; j++){
        for (i = 0; accept[i] != '\0'; i++){
            if (s[j] ==  accept[i]){
                return &s[j];
            }
        }
    }

    return NULL;
}
int main (void){
    char *s = "hello, world";
    char *f = "world";
    char *t;
    t = _strpbrk(s,f);
    printf("%s\n", t);

    return 0;
}