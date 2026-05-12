class Solution {
    public int maxSubArray(int[] nums) {
        int maxSum=0;
        int globalMax=nums[0];

        for(int i=0;i<nums.length;i++)
        {
             maxSum=maxSum+nums[i];
             globalMax=Math.max(globalMax,maxSum);
            if(maxSum<0){
                maxSum=0;
            }
        }
        return globalMax;

    }
}
