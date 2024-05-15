#include <stdio.h>

char *string_toupper(char *str);

char *string_toupper(char *str){

    int i = 0;
    int diff = 32;
    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z' ){
            str[i] -= diff;
            i++;
        }
       
    }
    printf("%s",str);
    printf("\n");

    return str;
}
int main (void){
    char str[] = "pure";
    string_toupper(str);

    return 0;
}