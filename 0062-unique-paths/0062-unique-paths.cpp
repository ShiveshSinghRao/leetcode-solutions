class Solution {
public:
 int counter=0;
    int check(int row,int col,int m ,int n, vector<vector<int>>&dp)
    {
        if(row>=m or col>=n)return 0;
        if(dp[row][col]!=-1)return dp[row][col];
        if(row==m-1 and col==n-1)
        {
            return 1;
        }
       int x= check(row+1,col,m,n,dp);
       int y= check(row,col+1,m,n,dp);
        dp[row][col]=x+y;
        //cout<<dp[row][col]<<endl;
        return dp[row][col];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return check(0,0,m,n,dp);
        
    }
};