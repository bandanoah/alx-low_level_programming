#include <stdio.h>
/**
 * main - Entry of the program
 * Description: prints all possible combinations of two two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
/*two loops outer for the first of num inner for the second */
/*j = i + 1 to esure no duplication or reversal of pair nums*/
/*use of /10 and %10 to print out the first and second num of the pair*/


	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

/*This ensure that the last nums don't have a , and space after*/
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
