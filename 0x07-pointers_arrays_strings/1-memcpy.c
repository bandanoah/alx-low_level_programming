#include "main.h"
/**
 * _memcpy - Copies a memory area.
 * @dest: Destination memory area where bytes will be copied to.
 * @src: Source memory area from which bytes will be copied.
 * @n: Number of bytes to be copied from src to dest.
 *
 * Return: A pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = src[i];
        n--;
    }

    return (dest);
}
