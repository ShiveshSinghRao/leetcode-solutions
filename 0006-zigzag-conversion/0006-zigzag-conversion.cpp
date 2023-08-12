class Solution {
public:
    string convert(string s, int numsRows) 
    {
       vector<vector<char>>v(numsRows+10,vector<char>(1e5,' '));
       int t=1,j=0,p=0;
       v[0][0]=s[0];
       if(numsRows==1 or s.size()==1)
       { 
         return s; 
       }
       while(t<s.size())
       {
           if(t<s.size())
           {
               for(int i =1;i<numsRows;i++)
               {
                  if(t<s.size())
                    v[i][j]=s[t++];
               }
               j++;
           }
          // cout<<"j ="<<j<<endl;
           for(int r=numsRows-2;r>-1;r--)
           {
               if(t<s.size())
                v[r][j]=s[t++];
               j++;
             //cout<<"j ="<<j<<" ";
           }
           j--;
       } 
       j++;  
       string ans;
       for(int i =0;i<numsRows;i++)
       {
           for(int x=0;x<j;x++)
           {
               if(v[i][x]!=' ')
                ans.push_back(v[i][x]);
              //cout<<v[i][x]<<" ";
           }
           //cout<<endl;
       }
       //cout<<s.size();
       return ans;
    }
};