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
    void check(TreeNode * root,int t,int sum,int &flag)
    {
        if(!root)return;
        if(root->left==nullptr && root->right==nullptr)
        {
            sum+=root->val;
            if(t==sum)
            {
                flag=1;
            }
            return ;
        }
        
        sum+=root->val;
        //cout<<sum<<endl;
        check(root->left,t,sum,flag);
        check(root->right,t,sum,flag);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int flag =0;
        int sum =0;
          if(!root)return 0;
        check(root,targetSum,sum,flag);
        return flag;
    }
};