#include <stdio.h>
#include <string.h>

int _atoi(char *s);
int _atoi(char *s){
    int r = 0;
    int i = 0;

    while (s[i] != '\0'){

        r = (s[i] - '0');/*this is the part that converts the 
        string characters into integers which are stored in 
        the variable r making it easy to print out the integers 
        after conversion.*/
        printf("%d",r);
        i++;
    }
    printf("\n");

    return r;
}
int main (void){
    char *s;
    s="78787878";
    _atoi(s);

    return 0;
}