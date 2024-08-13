#include <stdlib.h> /* Required for srand and rand()*/
#include <time.h>/* Require for time*/
#include <stdio.h>/*Reuired for the printf func*/
/**
 * main - Entry point of the program
 * Description: Generates random numbers and prints out if the number
 * is positive, negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(" %d :is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d :is zero\n", n);
	}
	else
	{
		printf("%d :is negative\n", n);
	}
	return (0);
}
