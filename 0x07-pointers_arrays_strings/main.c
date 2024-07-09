// main.c
#include <stdio.h>
#include "main.h"

int main(void)
{
    char src[50] = "Hello, world!";
    char dest[50];

    _memcpy(dest, src, 13);
    printf("Copied string: %s\n", dest);

    return 0;
}
