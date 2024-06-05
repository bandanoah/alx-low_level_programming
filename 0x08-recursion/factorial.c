#include <stdio.h>
/*
this is a program that caluculate the factorial of any given 
number stored in a.
*/
int factorial(int n){
    if (n == 0){
        return 1; // this is the exit condition for this recursive function
    }
    return (n * factorial(n - 1));

}

int main (void){
    int f;
    int a = 0;

    printf("Enter a Number: ");
    scanf("%d",&a);

    f = factorial(a);
    printf("%d! = %d\n",a,f);
    return 0;
}
