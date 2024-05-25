#include <stdio.h>
/*
for this function create a loop to loop through the string
compare to find the character
return a pointer to the first occurrence of c
else return null 
*/

char *_strchr(char *s, char c);
char *_strchr(char *s, char c){
    int i = 0;
    while ( s[i] != '\0'){
        if (s[i] == c){
            return &s[i];

        }
        i++;
    }
    return NULL;

}

int main (void){

    char *s = "marvin";

    char *f = _strchr(s,'a');
    if (f != NULL){
        printf("%s\n", f);
    }
    else {
        printf("character not found\n");
    }

    return 0;
}