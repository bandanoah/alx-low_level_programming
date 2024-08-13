#include <stdio.h>
/**
 * main -Entry point of the program
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int t;

for (t = 0; t <= 9; t++)
{
/*prints out each digit*/
	putchar('0' + t);
/*not to print a comma after the last digit*/
	if (t != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
