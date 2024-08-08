#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * 
 * Description: Generates a random number and prints whether the number
 *              is positive, negative, or zero.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		const char *p = "is positive";

		printf("%d %s\n", n, p);
	}
	else if (n == 0)
	{
		const char *z = "is zero";

		printf("%d %s\n", n, z);
	}
	else
	{
		const char *g = "is negative";

		printf("%d %s\n", n, g);
	}

	return (0);
}
