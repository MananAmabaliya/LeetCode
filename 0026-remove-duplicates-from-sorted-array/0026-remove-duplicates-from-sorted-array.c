int removeDuplicates(int* nums, int numsSize) {
   int m=0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[m]) {
            m++;
            nums[m] = nums[i];
        }
    }
    return m+1;
}