#include "main.h"
/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Starting address of memory to be filled.
 * @b: The desired value to fill the memory with.
 * @n: The number of bytes to be set to the value of b.
 *
 * Description: This function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b. It returns a pointer to the
 * memory area s.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    while(n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
    return (s);
}
