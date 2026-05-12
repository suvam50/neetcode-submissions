class Solution {
public:
    bool checkarray(vector<int> &v1, vector<int> &v2)
    {
        for(int i=0;i<26;i++)
        {
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int l1=s1.length();
        int l2=s2.length();

        if(l1>l2) return false;

        vector<int>v1(26,0);
        vector<int>v2(26,0);

        for(int i=0;i<l1;i++)
        {
            v1[s1[i]-'a']++;
        }

        for(int i=0;i<l1;i++)
        {
            v2[s2[i]-'a']++;
        }
        if(checkarray(v1,v2))
        {
            return true;
        }
        else
        {
            for(int i=l1;i<l2;i++)
            {
                v2[s2[i-l1]-'a']--;
                v2[s2[i]-'a']++;
                if(checkarray(v1,v2)) return true;
            }
        }
       return false;
    }
};
