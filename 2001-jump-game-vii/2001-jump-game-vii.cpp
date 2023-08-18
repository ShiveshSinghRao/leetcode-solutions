class Solution {
public:
    int ans =0;
    
    int check(int ind,string &s, int mini, int maxi,vector<int>&dp)
    {   
     
        if(ind>=s.size() or ind<0)return 0;
        if(ind==s.size()-1)
        {
            return 1 ;
        }
        
        
        if(dp[ind]!=-1)return dp[ind];
        if(s[ind]!='0')return 0;
        int t =0;
        for(int r= mini;r<=maxi;r++)
        {
         t = t | check(ind+r,s,mini,maxi,dp);
         if(t==1)
         {
             return dp[ind]=1;
         }
           
        }
       return dp[ind]=t;
        
       
  
    }
    bool canReach(string s, int minJump, int maxJump) {
         vector<int>dp(s.size(),-1);
         if(s[s.size()-1]!='0')return 0;
        int cnt = 0;
      
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '1'){
                cnt++;
                if(cnt >= maxJump) return false;
            }
            else{
                cnt = 0;
            }
        }
        // if(v[v.size()-1]!=s.size()-1)return 0;
      
         return check(0,s,minJump,maxJump,dp);
        
    }
};