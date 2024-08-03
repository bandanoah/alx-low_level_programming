#include <stdio.h>

int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {   
        if (argc != 3)
        {
            printf("Error");
            return 1;
        }
        
        char t = argv[1];
        char s = argv[2];
        char r = s * t;
        printf("%d\n",r);
    }
    return 0;
}