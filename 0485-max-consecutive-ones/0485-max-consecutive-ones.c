int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int ans = 0;
    int count=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count=0;
        }
        if(count>ans){
            ans=count;
        }
    }
    return ans;
        
}