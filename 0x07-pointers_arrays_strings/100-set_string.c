#include <stdio.h>

void set_string(char **s, char *to);

void set_string(char **s, char *to){
    // in order to have s to point to the value stored in to 
    *s = to;


}
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
}