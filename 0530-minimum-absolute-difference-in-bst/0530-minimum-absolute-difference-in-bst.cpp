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
    void func(TreeNode * root, vector<int>&v)
    {
        if(root == NULL)
        {
            return;
        }
        func(root->left, v);
        v.push_back(root->val);
        func(root->right, v);
    }
    
    int getMinimumDifference(TreeNode* root) 
    {
	
        vector<int>v;
        func(root,v);
        int ans = INT_MAX;
       
        for(int i = 0; i<v.size()-1; i++)
        {
            if(abs(v[i]-v[i+1])<ans)
            {
                ans = abs(v[i]-v[i+1]);
            }
        }
        
        return ans;
    }
};