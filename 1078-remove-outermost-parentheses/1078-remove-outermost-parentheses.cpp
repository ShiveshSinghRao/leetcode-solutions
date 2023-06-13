class Solution {
public:
    string removeOuterParentheses(string s) {
       
        vector<string>v;
        stack<char>st;
        int k =0;
        string ans;
        int counter=0;
        for(int i=0;i<s.size();i++)
        {
              if(s[i]=='(')
              {
                 st.push(s[i]);
                 if(counter>=1)
                 {
                     ans.push_back(s[i]);
                 }
                 counter++;
              }
              else
              {
                  st.pop();
                  ans.push_back(s[i]);
              }
              if(st.size()==0)
              {
                 ans.pop_back();
                 v.push_back(ans);
                 ans="";
                 counter=0;
              }
              
        }
        
        for(auto x:v)
        {
            ans+=x;
        }
        return ans;
    }
};