#include <stdio.h>
#include <string.h>
/*
initialize i,j,count
loop through s and accept
compare s[i] and accept[j]
increase the count by 1 each time a comparison is found
else if statement to ensure the comparison ends when the '\0'
is found to return the count and not continue with the comparison
*/

unsigned int _strspn(char *s, char *accept);

unsigned int _strspn(char *s, char *accept){

    int i,j,count;
    count = 0;
    for (i = 0; s[i] != '\0'; i++){
        for ( j = 0; accept[j] != 0; j++){
            if(s[i] == accept[j]){
                count += 1;
                break;               
            }
            else if(accept[j + 1] == '\0'){
                return count;
            }
        }
    }
    return count;
}

int main (void){
    char *s = "hello, world";
    char *f = "oleh";

    unsigned int n = _strspn(s,f);
    printf("%u\n", n);

    return 0;
}