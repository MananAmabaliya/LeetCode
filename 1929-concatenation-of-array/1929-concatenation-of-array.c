/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize=2*numsSize;
    int count=0;
    int *ans=malloc(2*numsSize * sizeof(int));

    for(int i=0;i<numsSize;i++){
        ans[i]=nums[i];
        count++;
    }
    for(int i=0;i<numsSize;i++){
        ans[count++]=nums[i];
    }
    return ans;
}