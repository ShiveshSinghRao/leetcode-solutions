class Solution {
public:
    bool isFascinating(int n) 
    {
         string x = to_string(2*n);
        string y = to_string(3*n);
        x+=y;
        x+=to_string(n);
        if(x.size()>9 || x.size()<9)return 0;
        sort(x.begin(),x.end());
        for(int i =0;i<x.size()-1;i++)
        {
            if(x[i]=='0')return 0;
            if(x[i]==x[i+1])return 0;
        }
        return 1;
    }
};