#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
/*j = i + 1 enusre j > i elimating duplicates and reveresed pairs*/
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
/*comma and space other num combinations except the last number 89*/
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
