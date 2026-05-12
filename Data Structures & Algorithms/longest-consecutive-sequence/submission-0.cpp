class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_map<int,bool>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=true;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]-1)>0) mp[nums[i]]=false;
        }
        int maxlen=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i])==true)
            {
                int length=1;
                while(mp.count(nums[i]+length))
                {
                    length++;
                }
                maxlen=max(length,maxlen);
            }
        }
        return maxlen;
    }
};
