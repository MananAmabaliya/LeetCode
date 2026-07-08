

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    *returnSize = numsSize;

    int* ans = malloc(numsSize * sizeof(int));

    int n1 = 0;
    int n2 = n;

    for (int i = 0; i < numsSize; i += 2) {
        ans[i] = nums[n1++];
    }

    for (int i = 1; i < numsSize; i += 2) {
        ans[i] = nums[n2++];
    }

    return ans;
}