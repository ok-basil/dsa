#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};

int FindMissing(struct Array arr)
{
    int diff = arr.A[0] - 0;
    
    for (int i = 0; i < arr.length; i++)
    { 
        if (arr.A[i] - i != diff)
        {
            while (diff < arr.A[i] - i)
            {
                printf("%d ", i + diff);
                diff++;
            }
        }
    }
    return 0;
}

int FindMissing2(struct Array arr, int l, int h)
{
    int n = arr.length;

    int *B = (int *)malloc((h + 1) * sizeof(int));

    for (int i = 0; i < h; i++)
    {
        B[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        B[arr.A[i]] = 1;
    }

    printf("Missing elements are: ");
    for (int l = 1; i <= h; i++)
    {
        if (B[i] == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    free(B);

    return 0;

}

int FindDuplicates(struct Array arr)
{
    int lastDuplicate = 0;

    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != lastDuplicate)
        {
            printf("%d ", arr.A[i]);
            lastDuplicate = arr.A[i];
        }
    }
    return 0;
}


int main()
{
    struct Array arr;

    arr.size = 10;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of elements: ");
    scanf("%d", &arr.length);

    printf("Enter %d elements: ", arr.length);
    for (int i = 0; i < arr.length; i++){
        scanf("%d", &arr.A[i]);
    }
    FindMissing(arr);
    printf("\n");
    
    return 0;


}