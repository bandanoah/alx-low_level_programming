#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: prints out all single digit numbers of base 10
 * starting form 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
/*n is converted into its corresponding character in ASCII*/
/*ASCII value 0 is 48 by adding n we get the ASCII value for n*/
/*The integers are printed out as character*/
putchar('0' + n);
}
putchar('\n');
return (0);
}
