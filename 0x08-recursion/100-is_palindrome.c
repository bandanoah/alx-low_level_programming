#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
int _is_palindrome checks whether the characters in the left match
the characters in the right.
two functions to set this up properly 
*/

int _is_palindrome(char *s);

int palindrome_checker(char *s, int r, int t);

int _is_palindrome(char *s)
{
    int r = 0;
    int t = strlen(s) -1;

    return palindrome_checker(s,r,t);
}

int palindrome_checker(char*s,int r,int t)
{   //base case 
    if (r > t)
    {
        return 1;
    }
    if(!isalnum(s[r]))
    {
        return palindrome_checker(s,r + 1,t);
    }
    if(!isalnum(s[t]))
    {
        return palindrome_checker(s,r,t - 1);
    }
    if (tolower(s[r]) != tolower(s[t]))
    {
        return 0;   
    }
    if (tolower(s[r]) == tolower(s[t]))
    {
        return 1;
    }

    return palindrome_checker(s,r + 1,t - 1);
}
int main (void)
{
    int r;

    r = _is_palindrome("level");
    printf("%d\n",r);
    r = _is_palindrome("redder");
    printf("%d\n",r);

    return 0;
}