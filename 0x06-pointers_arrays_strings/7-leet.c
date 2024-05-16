#include <stdio.h>


char *leet(char *str){

    int i = 0;
    int j;
    char s1[]="aAeEoOtTlL";
    char s2[]="4433007711";
    for(i = 0; str[i] != '\0';i++){

        for (j = 0; j < 10; j++){
            if(str[i] == s1[j]){
                str[i] == s2[j];
                break;
            }
        }
 
    }
    return str;
}
int main (void){
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.";

    printf("%s\n",leet(s));

    return 0;
}