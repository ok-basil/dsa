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

// Using Hashing
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
    for (int i = 1; i <= h; i++)
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

// This function prints the number of times a single element is repeated
int FindDuplicates(struct Array arr)
{
    int lastDuplicate = 0;

    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != lastDuplicate)
        {
            printf("%d ", arr.A[i]);
            lastDuplicate = arr.A[i];
        }
    }
    return 0;
}

// This function counts the number of times mutliple elements are repeated
void FindDuplicates2(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1])
        {
            int j = i + 1;
            while (arr.A[j] == arr.A[i])
            {
                j++;
            }
            printf("%d is appearing %d times\n", arr.A[i], j - i);
            i = j - 1;
        }
    }
}

// Using Hashing
void FindDuplicates3(struct Array arr, int l, int h)
{
    int *H = (int *)malloc((h + 1) * sizeof(int));

    for (int i = 0; i <= h; i++)
    {
        H[i] = 0;
    }

    for (int i = 0; i < arr.length; i++)
    {
        H[arr.A[i]]++;
    }

    for (int i = 0; i < h; i++)
    {
        if (H[i] > 1)
            printf("%d is appearing %d times \n", i, H[i]);
    }
    printf("The special thing you're looking for is %d", H[30]);
    printf("\n");

    free(H);
}


int main(void)
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
    // FindMissing(arr);
    // FindDuplicates2(arr);
    FindDuplicates3(arr, 1, 30);
    printf("\n");
    
    return 0;
}