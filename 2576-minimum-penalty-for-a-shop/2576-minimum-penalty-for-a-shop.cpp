class Solution {
public:
    int bestClosingTime(string ct) {
        int maxi =0;
        int sc=0;
        int j=-1;
        for(int i =0;i<ct.size();i++)
        {
            sc+= ct[i]=='Y'?1:-1;
            if(sc>maxi)
            {
                maxi=sc;
                j=i;
            }
        }
        return j+1;
       
    }
};