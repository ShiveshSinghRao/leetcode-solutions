class Solution {
public:
//    static bool comp(pair<int,int>a,pair<int,int>b)
//    {
//        if(a.first<b.first)return 1;
//        if(a.first==b.first)
//        {
//            if(a.second)
//        }
//    }
    vector<vector<int>> groupThePeople(vector<int>&nums) {
       vector<pair<int,int>>v;
       vector<vector<int>>ans;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
           v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        cout<<endl;
        for(int i =0;i<n;i++)
        {
            int size = v[i].first;
            vector<int>t;
            cout<<" t.size() "<<t.size()<<endl;
            for(int j =0;j<size;j++)
            {
               t.push_back(v[i++].second);
               cout<<t.back()<<" ";  
               
            }
            cout<<endl<<ans.size()<<endl;
            i--;
            cout<<endl;

            ans.push_back(t);
        }
        return ans;
    }
};