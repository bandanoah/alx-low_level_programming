#include <stdio.h>

int main (void)
{
    int i,j,k;

    for (i =0; i <= 9; i++)
    {
        for (j = 1; j <=8; j++)
        {
            for (k = 2; k <= 7; k++)
            {
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);

                if( i != 9 || k != 7)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return 0; 
}