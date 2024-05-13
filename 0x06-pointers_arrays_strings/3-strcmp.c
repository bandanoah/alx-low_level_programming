#include <stdio.h>

int _strcmp(char *s1, char *s2);

int _strcmp(char *s1, char *s2){
    
    int i = 0;
    int j = 0;
    int res = 0;
    while (s1[i] != '\0' && s2[j] != '\0'){
        
        if (s1[i] > s2[j]){
            res += s1[i] - s2[j];
            
        } else if( s1[i] < s2[j]){
            int k = s2[j] - s1[i];
            res -= k;
        }else if (s1[i] == s2[j]){
            int p = s1[i] - s2[j];
            res += p;
        }
        i++;
        j++;
    }

    return res;
}
int main (void){
    char s1[] = "Noah is a hard worker";
    char s2[] = "Marvin is a hard worker";

    printf("%d\n",_strcmp(s1,s2));
    printf("%d\n",_strcmp(s2,s1));
    printf("%d\n",_strcmp(s1,s1));

    return 0;
}
