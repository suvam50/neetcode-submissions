class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++)
        {
            s=s+to_string(strs[i].length())+"&"+strs[i];
        }
        cout<<s<<endl;
        return s;

    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.length())
        {
            int j=i;
            while(s[j]!='&')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            res.push_back(s.substr(j+1,len));
            i=j+1+len;
        }
        return res;
    }
};
