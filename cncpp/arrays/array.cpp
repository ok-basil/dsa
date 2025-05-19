#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    int i;
    
    p = (int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;
    
    for (i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    
    printf(" \n");
    
    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    
    printf(" \n");
    return 0;
}