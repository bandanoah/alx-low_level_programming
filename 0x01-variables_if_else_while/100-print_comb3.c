#include <stdio.h>

int main (void)
{
    int i,j;
     for (i = 0; i <= 9; i++)
     {
        for (j = 1; j <= 8; j++)
        {
            putchar('0' + i);
            putchar('0' + j);
            if ( i !=9 || j !=8){
                putchar(',');
                putchar(' ');
            }
        }
     }
     putchar('\n');
     return 0;
}