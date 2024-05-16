#include <stdio.h>

char *rot13(char *str);

char *rot13(char *str){
    int i,j;
    char s1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s2[]="NOPQRSTUVWXYZABCDEFGHIJKLM";
    char s3[]="abcdefghijklmnopqrstuvwxyz";
    char s4[]="nopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i] != '\0'; i++){
        for (j = 0; j < 26; j++){
            if(str[i] == s1[j]){
                str[i] = s2[j];
                break;
            }else if(str[i] == s3[j]){
                str[i] = s4[j];
                break;
            }
        }
    }
    return str;
}
int main (void){
    char str[]="My name is Noah and i am a software developer based in Nairobi Kenya";
    printf("%s\n",rot13(str));
    return 0;
}