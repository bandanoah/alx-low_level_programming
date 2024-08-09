#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: Prints out alphabet in lowercase and then in uppercase
 *followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
/*Prints lowercase alphabet */
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
/*Prints uppercase alphabet*/
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
