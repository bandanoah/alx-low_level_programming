#include <stdio.h>

void _print_rev_recursion(char *s );

void _print_rev_recursion(char *s)
{
    
    //create a base case to terminate 
    //recursive function that calls itself
    if (*s == '\0')
    {
        return;
    }
    //recursive call that calls itself
    _print_rev_recursion(s + 1);
    putchar(*s);
     
}
int main (void)
{
    char str[] = "Hello World";
    _print_rev_recursion(str);
    putchar('\n');
    return 0;
}