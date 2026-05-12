class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>st;
        st.push(INT_MAX);
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(st.top()>prices[i])
            {
                st.pop();
                st.push(prices[i]);
            }
            else
            {
                maxprofit=max(maxprofit,prices[i]-st.top());
            }
        }
        return maxprofit;
    }
};
