#include <stdio.h>
#include <stdlib.h>

int main (void){

    int *a;

    int size_r = 0;

    printf("Enter size of r: ");
    scanf("%d",&size_r);

    a = malloc(size_r * sizeof(int));

    for(int i = 0; i < size_r; i++){
        a[i] = i;
        printf("%d",a[i]);
        
    }
    printf("\n");
    free (a);
    return 0;
}