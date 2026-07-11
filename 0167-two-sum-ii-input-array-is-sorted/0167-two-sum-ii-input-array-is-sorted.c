/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;

    int *ans = (int *)malloc(2 * sizeof(int));

    int low = 0;
    int high = numbersSize - 1;

    while (low < high) {
        int sum = numbers[low] + numbers[high];

        if (sum == target) {
            ans[0] = low + 1;   
            ans[1] = high + 1;  
            return ans;
        }
        else if (sum < target) {
            low++;
        }
        else {
            high--;
        }
    }

    return ans;
}