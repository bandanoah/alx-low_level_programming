#include <stdio.h>
/*
made a couple of errors in compiling this function 
in previous functions i have been comparing each letter of the respective
parameters then printing out the letters but for this func it did not work
carrying out comparisons like that is not suited for this task
so i opted to use a different way
*/

char *_strstr(char *haystack, char *needle);

char *_strstr(char *haystack, char *needle){
  for (; *haystack !='\0'; haystack++){
    char *h = haystack;
    char *n = needle;

    while(*h == *n && *n != '\0'){
        h++;
        n++;
    }
    if (*n == '\0'){
        return haystack;
    }
  }
  return NULL;
}
int main (void){
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s,f);
    printf("%s\n",t);

    return 0;
}