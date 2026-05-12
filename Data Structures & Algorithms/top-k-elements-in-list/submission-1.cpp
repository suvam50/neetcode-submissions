class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>freq(nums.size()+1);
        
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            freq[i->second].push_back(i->first);
        }
        for(int i=freq.size()-1;i>0;i--)
        {
            //vector<int>x;
            //x=freq[i];
            for(int j=0;j<freq[i].size();j++)
            {
                
                res.push_back(freq[i][j]);
                if (res.size() == k)
                {
                    return res;
                }
            }
        }
        return res;
    }
};