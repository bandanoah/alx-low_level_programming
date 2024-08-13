#include <stdio.h>
/**
 * main - Entry of the program
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;

for (l = 0; l <= 9; l++)
{
printf("%d", l);
}
putchar('\n');
return (0);
}
