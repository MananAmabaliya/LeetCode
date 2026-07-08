void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0)
        return;

    int m = 0;
    int num[numsSize - k];
    for (int i = 0; i < numsSize - k; i++) {
        num[i] = nums[i];
    }
    for (int i = numsSize - k; i < numsSize; i++) {
        nums[m++] = nums[i];
    }
    for (int i = 0; i < numsSize - k; i++) {
        nums[m++] = num[i];
    }
}