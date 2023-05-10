class Solution {
public:
    void check(int ind,vector<int>&d,int &carry)
    {
        if(ind==d.size() && carry)
        {
            d.push_back(1);
            return;
        }
        if(d[ind]==9 && carry ==1)
        {
            d[ind]=0;
            carry =1;
            check(ind+1,d,carry);
        }
        else if(d[ind]<9 && carry==1)
        {
            d[ind]+=1;
            carry=0;
            return ;
        }

    }
    vector<int> plusOne(vector<int>& d) {
        reverse(d.begin(),d.end());
        int carry =1;
        check(0,d,carry);
        reverse(d.begin(),d.end());
        return d;
    }
};