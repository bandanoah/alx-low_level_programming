#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char t;
int p;

for (p = 0; p <= 9; p++)
{
putchar('0' + p);
}
for (t = 'a'; t <= 'f'; t++)
{
putchar(t);
}
putchar('\n');
return (0);
}
