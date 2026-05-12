class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int>v(26,0);
       int maxlength=0;
       int l=0,r=0;
       int maxcount=0;
       while(r<s.length())
       {
            v[s[r]-'A']++;
            maxcount=max(maxcount,v[s[r]-'A']);
            if(r-l+1-maxcount>k)
            {
                v[s[l]-'A']--;
                l++;
            }
            maxlength=max(maxlength,r-l+1);
            r++;
       }
    //    for(int i=0;i<26;i++)
    //    {
    //     cout<<v[i]<<" ";
    //    }

       return maxlength;
    }
};
