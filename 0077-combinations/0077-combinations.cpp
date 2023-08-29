class Solution {
public:vector<vector<int>>ans;
    void check(int ind, int &n ,int k,vector<int>&t)
    {
        if(k==0)
        {
            ans.push_back(t);
            return;
        }
        for(int i = ind;i<n+1;i++)
        {
            t.push_back(i);
            check(i+1,n,k-1,t);
            t.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>t;
         check(1,n,k,t);
        return ans;
    }
};