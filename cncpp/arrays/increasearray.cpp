//
//  main.c
//  cpractice
//
//  Created by Basil on 25/01/2025.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, *q;
    int i;
    p = (int *)malloc(5*sizeof(int));
    q = (int *)malloc(10*sizeof(int));
    
    p[0] = 3; p[1] = 5; p[2] = 7; p[3] = 9; p[4] = 11;
    
    for (i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    free(p);
    p = q;
    q = NULL;
    
    for (i = 0; i < 5; i++)
        printf("%d \n", p[i]);
    
    printf("%d", *p);
    
    return 0;
}
