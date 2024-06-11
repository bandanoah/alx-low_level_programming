#include <stdio.h>
/*
_is_prime_number checks whether n is prime number or not
returns 1 if n is a prime number and 0 if not
*/
int actual_prime(int n, int m);
int _is_prime_number(int n);

int actual_prime(int n, int m)
{   
    /*
    its the divisibility part of the prime number checking
    that fits the role of being recursive to continously 
    check whether the number was divisible by some other number

    */
    if ( m == 1)
    {
        return 1;
    }
    if (n % m == 0)
    {
        return 0;
    }

    return actual_prime(n,m-1);
}
int _is_prime_number(int n)
{
    if(n <= 1)
    {
        return 0;
    }

    return actual_prime(n,n-1);

}
int main (void)
{
    int r;

    r = _is_prime_number(1);
    printf("%d\n",r);
    r = _is_prime_number(1024);
    printf("%d\n",r);
    r = _is_prime_number(25);
    printf("%d\n",r);

    return 0;
}
/*

i was under the impression that only using the 
prime number definition was the only way to check 
if a number was prime or not but this also works 
take into account other way of going about solving
a problem by using several way or looking at the problem from 
various different angles
*/