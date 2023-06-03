class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) 
    {
        if(f.size()==1)
        {
            if((f[0]==0 && n==1 || n==0) || (f[0]==1 && n==0)) return 1;
            return 0;
        }
        for(int i =0;i<f.size()-2;i++)
        {
            if(f[i]==0 && f[i+1]==0)
            {
                if(i==0)
                {
                    n--;
                    f[i]=1;
                }
                else if(f[i+2]==0)
                {
                    f[i+1]=1;
                    n--;
                }
            }
        }
        if(f[f.size()-1]==0)
        {
            if(f[f.size()-2]==0)
            {
                n--;
            }
        }
     
        if(n<=0)return 1;
        return 0;
    }
};