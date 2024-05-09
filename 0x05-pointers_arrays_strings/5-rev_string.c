#include <stdio.h>
#include <string.h>
#include <cs50.h>

void rev_string(char *s);

void rev_string(char *s){

    int len = strlen(s);
    for (int i = len -1; i >=0; i--){
        printf("%c",s[i]);
    }
    printf("\n");
}
int main (void){
    char *s = get_string("Whats the word: ");
    rev_string(s);
    return 0;
}