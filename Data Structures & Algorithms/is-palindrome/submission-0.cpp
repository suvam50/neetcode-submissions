class Solution {
public:
    char convertolower(char c)
    {
        if(c>='A' && c<='Z')
        {
            c=c-'A'+'a';
            return c;
        }
        return c;
    }
    bool checkpalindrome(string s1)
    {
        int i=0,j=s1.length()-1;
        while(i<=j)
        {
            if(s1[i]!=s1[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.length();i++)
        {
            if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='0')&&(s[i]<='9')))
            {
                s1=s1+convertolower(s[i]);
            }
        }
       // cout<<s1;
        return checkpalindrome(s1);
        
    }
};
