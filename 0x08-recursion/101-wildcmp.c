#include <stdio.h>
#include <ctype.h>
/*
a function that compares two strings recursively 

*/
int wildcmp(char *s1, char *s2);

int cmp(char *s1, char *s2, int r, int t);
int wildcmp(char *s1, char *s2)
{
    int r = 0;
    int t = 0;

    return cmp(s1,s2,r,t);
}

int cmp(char *s1,char *s2,int r,int t)
{   
    if (s1[r] == '\0' && s2[t] == '\0')
    {
        return 1;
    }
    if (s1[r] == '\0' || s2[t] == '\0')
    {
        return 0;
    }
    if(!isalnum(s1[r]))
    {
        return cmp(s1,s2,r + 1,t);
    }
    if (!isalnum(s2[t]))
    {
        return cmp(s1,s2,r,t + 1);
    }
    if (tolower(s1[r]) != tolower(s2[t]))
    {
        return 0;
    }

    return cmp(s1,s2,r + 1,t + 1);


}
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n",r);
    r = wildcmp("main.c", "m*a*i*n.*c");

    return 0;
}