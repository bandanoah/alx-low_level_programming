#include "main.h"
/*
 * _strcat - Concatenates two strings.
 * @dest: input
 * @src: input
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int d = 0;
    while (dest[i] != '\0')
    {
        dest[i];
        i++;
    }
    while (src[d] != '\0')
    {
        dest[i] = src[d];
        i++;
        d++;
    }
    dest[i] = '\0';
    return dest;
}
