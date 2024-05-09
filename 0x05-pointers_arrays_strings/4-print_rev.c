#include <stdio.h>
#include <string.h>
#include <cs50.h>


void print_rev(char *s);

void print_rev(char *s){

    int len= strlen(s);
    for(int i = len -1; i >=0; i--){
        printf("%c",s[i]);
    }
    printf("\n");
}
int main (void){
    char *s = get_string("Enter input: \n");
    print_rev(s);
    return 0;
}