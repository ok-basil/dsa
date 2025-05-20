#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    printf("What number are you looking to find? \n");
    scanf("%d", &number);
    
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    
    for (int i = 0; i < 10; i++)
    {
        if (number == A[i])
        {
            printf("Number found at index: %d\n", i);
        }
        else {
            printf("Number not found! Try something else");
        }
    }
    
    return 0;
}