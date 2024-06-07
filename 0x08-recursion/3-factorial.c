#include <stdio.h>

int factorial(int n);

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if(n < 0)
    {
        return -1;
    }
    return n * factorial(n -1);
}
int main (void)
{
    int r;

    r = factorial(5);
    printf("%d\n",r);
    return 0;
}