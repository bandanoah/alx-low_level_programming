#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: Generates a random number finds the last digit of that number
 *checks whether the number is greater than 5, is zero or less than
 *6
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int l;

/*Generates random number stored in n*/
srand(time(0));
n = rand() - RAND_MAX / 2;

/*Finds the last digit of n*/
l = n % 10;

/*Checks and prints the result based on the value of */
if (l > 5)
{
printf("Last digit of %d is %d: and is greater than 5\n", n, l);
}
else if (l == 0)
{
printf("Last digit of %d is %d: and is 0\n", n, l);
}
else if (l < 6 && l != 0)
{
printf("Last digit of %d is %d: and is less than 6 and not 0\n", n, l);
}
return (0);
}
