#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: prints out alphabet in lowercase followed by a new line
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char c = 'a';

for (; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
