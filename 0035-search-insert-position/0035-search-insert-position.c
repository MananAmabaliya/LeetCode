int searchInsert(int* nums, int numsSize, int target) {
    int ans=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<target){
             ans=i+1;
        }
        
    }
    return ans;
}