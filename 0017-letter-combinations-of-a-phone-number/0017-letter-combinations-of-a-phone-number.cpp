class Solution {
public:
    void check(int ind,string &d,vector<string>&t,vector<string>&v,string &j)
    { 
       
        if(ind==d.size())
        {
            v.push_back(j);
            return ;
        }
         //if(ind>d.size() or j.size()>d.size())return;
      // int k = 0;
       //cout<<t[ind]<<endl;

       for(int i =0;i<t[d[ind]-'0'].size();i++)
       {
           j.push_back(t[d[ind]-'0'][i]);
           check(ind +1,d,t,v,j);
           j.pop_back();
       }
    }
    vector<string> letterCombinations(string d) 
    {
        if(d.size()==0)return {};
        
     vector<string>t{"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

     vector<string>v;
     string j;
    
         check(0,d,t,v,j);
     
        
        return v;
    }
};