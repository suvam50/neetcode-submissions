class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       int k=s.length();
       //if(k%2!=0)return false;
       int i=0;
       while(i<k)
       {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            st.push(s[i]);
        }
        else 
        {
            if(st.empty()) return false;
            if((s[i]==')' && st.top()!='(') || (s[i]==']' && st.top()!='[') || (s[i]=='}' && st.top()!='{')) return false;
            st.pop();
        }
        i++;
       } 
       return st.empty();
    }
};
