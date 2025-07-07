#include <stdio.h>
#include <stdlib.h>

// Brute Force Approach
int* twoSum (int* nums, int numsSize, int target, int* returnSize)
{
    static int result[2];
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

// Using Hashing to find two sum
int* twoSum2(int* nums, int numsSize, int target, int* returnSize)
{
    
}
int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* indices = twoSum(nums, 4, target, &returnSize);

    if (indices != NULL) {
        printf("Indices: %d, %d\n", indices[0], indices[1]);
    } else {
        printf("No two numbers add up to the target.\n");
    }
    return 0;
}