#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if (n > 0){
        
       const char *p = "is positive";
        
        printf("%i %s\n",n , p);
    }else if (n == 0) {

       const char *z = " is zero";

        printf("%i %s\n", n , z);
    }
    else if(n < 0) { 
        const char *g = " is negative";

        printf("%i %s\n", n ,g);
    }

	
	return (0);
}