class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>maxleft(n,0);
        vector<int>maxright(n,0);
        int mxleft=height[0];
        int mxright=height[n-1];
        maxleft[0]=0;
        maxright[n-1]=0;
        for(int i=1;i<n;i++)
        {
            if(height[i]>mxleft)
            {
                mxleft=height[i];
            }
            maxleft[i]=mxleft;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(height[i]>mxright)
            {
                mxright=height[i];
            }
            maxright[i]=mxright;
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            int sum=min(maxright[i],maxleft[i])-height[i];
            if(sum>=0) total=total+sum;
        }
        return total;
    }
};
