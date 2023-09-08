class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    { 
        vector<vector<int>>ans;
        ans.push_back({1});
       // ans.push_back({1,1});
        for(int i =1;i<numRows;i++)
        {
            vector<int>t(i+1,1);
            for(int j=1;j<t.size()-1;j++)
            {
                t[j]=ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(t);
        }
        return ans;
    }
};