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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);

       
        vector<int>ans;
         if(!root)return ans;
        while(q.size()>0)
        {
            int size = q.size();
            int x;
            for(int i =0;i<size;i++)
            {
                auto temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                if(i==size-1)
                {
                    x=temp->val;
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};