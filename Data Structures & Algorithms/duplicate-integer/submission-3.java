class Solution {
    public boolean hasDuplicate(int[] nums) {
    Map<Integer,Boolean>mp=new HashMap<>();

    for(int i=0;i<nums.length;i++){
        if(mp.containsKey(nums[i])) return true;
        mp.put(nums[i],true);
    }  
    return false;
    }
}