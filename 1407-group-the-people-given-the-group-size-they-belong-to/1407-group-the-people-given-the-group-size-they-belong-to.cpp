class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        map<int,vector<int>>m;
        vector<vector<int>>ans;
        int  n =nums.size();
        for(int i =0;i<n;i++)
        {
            m[nums[i]].push_back(i);
        }

        for(auto x:m)
        {
            vector<int>&t=x.second;
            if(t.size()==x.first)
            {
                ans.push_back(t);
                continue;
            }
           
               vector<int>q;
               for(auto y:t )
               {
                   
                   if(q.size()<x.first)
                     {
                         q.push_back(y);
                         //cout<<"q.size() "<<q.size()<<" y "<<y<<endl;
                     }
                    else
                      {
                          ans.push_back(q);
                          // for(auto p:q)cout<<p<<" ";
                         // cout<<endl;
                          q.clear();
                           q.push_back(y);
                      }
               }
               if(q.size()>0)ans.push_back(q);
            
          
           
        }  return ans;
    }

};