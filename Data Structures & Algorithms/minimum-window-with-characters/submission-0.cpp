class Solution {
public:
    string minWindow(string s, string t) {
      unordered_map<char,int>mp;
      unordered_map<char,int>mp1;

      for(int i=0;i<t.length();i++)
      {
        mp[t[i]]++;
      }
      int need=mp.size(),have=0;
      cout<<need;
      int l=0,r=0;
      int start=0,len=INT_MAX;
      while(r<s.length())
      {
        mp1[s[r]]++;
        if(mp.find(s[r])!=mp.end() && mp1[s[r]]==mp[s[r]]) have++;
       
        r++;
        
        while(have==need)
        {
            if(r-l<len)
            {
                start=l;
                len=r-l;
            }
            mp1[s[l]]--;
            if(mp.find(s[l])!=mp.end() && mp1[s[l]]<mp[s[l]]) have--;
            l++;
        }
      }
      if(len!=INT_MAX)
      {
        return s.substr(start,len);
      }     
      else
      {
        return "";
      }

     
    }
};
