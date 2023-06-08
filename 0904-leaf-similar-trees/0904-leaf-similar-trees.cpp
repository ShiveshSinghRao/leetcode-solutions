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
    void check(TreeNode *root,vector<int>&v)
    {
        if(!root)return;
        if(!root->left && !root->right)
        {
            v.push_back(root->val);
        }
        check(root->left,v);
        check(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        check(root1,v1);
        check(root2,v2);
        if(v1==v2)return 1;
        return 0;
    }
};