#include "main.h"

/*
 * swap_int - swaps the values of two intergers
 * @a:input
 * @b:input
 * Return: a,b
 */

void swap_int(int *a, int *b)
{
    int m;

    m = *a;
    *a = *b;
    *b = m;
}
