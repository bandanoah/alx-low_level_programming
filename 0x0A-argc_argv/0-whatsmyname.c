#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
        if (i == 0)
        {
            break;
        }
    }
    return 0;
}