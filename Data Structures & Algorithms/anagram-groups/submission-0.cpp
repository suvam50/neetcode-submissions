class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>>res;
      unordered_map<string,vector<string>>ans;

      for(int i=0;i<strs.size();i++) 
      {
        vector<int>v(26,0);
        string s=strs[i];
        for(int j=0;j<s.length();j++)
        {
            v[s[j]-'a']++;
        }
        string key;
        for(int j=0;j<v.size();j++)
        {
            key=key+char(v[j]);
        }
        ans[key].push_back(s);
      }

      for(auto pair=ans.begin(); pair!=ans.end();pair++)
      {
        res.push_back(pair->second);
      }
      return res;
    }
};
