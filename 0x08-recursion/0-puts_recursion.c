#include <stdio.h>
/*
creating a function that prints a string with a new line

*/

void _puts_recursion(char *s)
{   
    //base line for the recursive function
    if (*s == '\0'){
        putchar('\n');
        return;
    }
    putchar(*s);
    _puts_recursion(s + 1);

}
int main (void)
{   
    char str[] = "Hello world!";
    _puts_recursion(str);
    return 0;
}