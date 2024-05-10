#include <stdio.h>
#include <string.h>
#include <cs50.h>

void puts_half(char *str);
void puts_half(char *str){
    int len = strlen(str);
    if (len %2 == 0){
        int e = len /2;
        for (int i = e; i < len; i++){
            printf("%c",str[i]);
        }
    }else if (len %2 !=0){
        int d = (len -1)/2;
        for (int p = d; p < len; p++){
            printf("%C",str[p]);
        }
    }
    printf("\n");
}
int main (void){
    char *str = get_string(" enter: ");
    puts_half(str);
    return 0;
}