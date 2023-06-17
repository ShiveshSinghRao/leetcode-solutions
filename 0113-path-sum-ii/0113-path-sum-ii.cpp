/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 void check(TreeNode * root,int t,int sum, vector<vector<int>>&ans, vector<int>v)
    {
        if(!root)return;
        if(root->left==nullptr && root->right==nullptr)
        {
            sum+=root->val;
             v.push_back(root->val);
            if(t==sum)
            {
               ans.push_back(v);
            }
            v.pop_back();
            return ;
        }
        
        sum+=root->val;
        v.push_back(root->val);
        check(root->left,t,sum,ans,v);
        //v.pop_back();
        check(root->right,t,sum,ans,v);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum)
    {
            vector<vector<int>>ans;
           if(!root)return ans; 
           int sum=0;  
           check(root,targetSum,sum,ans,{});
           return ans;
    }
};