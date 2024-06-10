#include <stdio.h>
/*
This program finds the square root of a number
through recursion

*/

int s_qrt(int n, int g);
int _sqrt_recursion(int n);

int s_qrt(int n, int g)
{
    /*
    this function is feed n from _sqrt_recursion
    and conducts the process of looking for the 
    square root of n checking if g * g gives n or a 
    number greater than n;
    */
    if (g * g == n)
    {
        return g;
    }
    if (g * g > n)
    {
        return -1;
    }
    return s_qrt(n,g +1);
}


int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;
    }

    return s_qrt(n , 0);
}

int main (void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n",r);
    r = _sqrt_recursion(25);
    printf("%d\n",r);

    return 0;
}