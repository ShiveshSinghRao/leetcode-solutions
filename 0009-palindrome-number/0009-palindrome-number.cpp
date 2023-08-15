class Solution {
public:
    bool isPalindrome(int x) 
    {
      string s = to_string(x);
      int n = s.size();
      if(s[0]=='-')return 0;
      for(int i=0;i<n/2;i++)
      {
          if(s[i]!=s[n-1-i])return 0;
      }
      return 1;
    }
};