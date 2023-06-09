/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode * lca(TreeNode * root,TreeNode *p,TreeNode*   q )
    {
        if(root==nullptr || root==p || root==q)
        {
            return root;
        }

        TreeNode * leftTree= lca(root->left,p,q);

        TreeNode * rightTree= lca(root->right,p,q);
      
        if(leftTree!=nullptr && rightTree!=nullptr)
        {
            return root;
        }
        else if(rightTree==nullptr)
        {
            return leftTree;
        }
        else{
            return rightTree;
        }

           
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         return lca(root,p,q);
    }
};