#include <stdio.h>
#include <string.h>

void _puts(char *str);

void _puts(char *str){
    printf("%s\n",str);
}
int main (void){
    char *str;
    str = "The greatest gift unto man is life";
    _puts(str);
    return 0;
}