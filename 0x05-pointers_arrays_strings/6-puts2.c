#include <stdio.h>
#include <string.h>

void puts2(char *str);
void puts2(char *str){
    int i;
    int len = strlen(str);
    for (i = 0; i <= len -1; i+=2){
        printf("%c",str[i]);
    }
    printf("\n");
}

int main (void){

    char *str="0123456789";
    puts2(str);
    return 0;
}