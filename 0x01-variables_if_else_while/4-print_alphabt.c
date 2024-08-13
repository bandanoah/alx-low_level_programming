#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: Prints out lowercase alphabet except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
if (l != 'q' && l != 'e')
{
putchar(l);
}
}
putchar('\n');
return (0);
}
