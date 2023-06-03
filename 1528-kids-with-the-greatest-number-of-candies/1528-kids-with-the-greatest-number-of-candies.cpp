class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ex)
     {
        vector<bool>ans(c.size(),false);
        int maxi =INT_MIN;
        for(int i =0;i<c.size();i++)
        {
            maxi=max(c[i],maxi);
        }
        for(int i =0;i<c.size();i++)
        {
            if(c[i]+ex>=maxi)
            {
                ans[i]=true;
            }
        }
        return ans;
    }
};