/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes array must be malloced.
 */

#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void getPerms(int nums[], int idx, int numsSize, int **ans, int *returnSize)
{
    if (idx == numsSize)
    {
        ans[*returnSize] = (int *)malloc(numsSize * sizeof(int));

        for (int i = 0; i < numsSize; i++)
        {
            ans[*returnSize][i] = nums[i];
        }

        (*returnSize)++;
        return;
    }

    for (int i = idx; i < numsSize; i++)
    {
        swap(&nums[idx], &nums[i]);

        getPerms(nums, idx + 1, numsSize, ans, returnSize);

        swap(&nums[idx], &nums[i]);  
    }
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    // Calculate total permutations = numsSize!
    int total = 1;
    for (int i = 2; i <= numsSize; i++)
    {
        total *= i;
    }

    // Allocate answer array
    int **ans = (int **)malloc(total * sizeof(int *));

    // Allocate column sizes
    *returnColumnSizes = (int *)malloc(total * sizeof(int));

    for (int i = 0; i < total; i++)
    {
        (*returnColumnSizes)[i] = numsSize;
    }

    *returnSize = 0;

    getPerms(nums, 0, numsSize, ans, returnSize);

    return ans;
}