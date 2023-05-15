/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  void reversekro(ListNode *root,int &k ,ListNode *&temp)
    {
        if(!root)
        {
            return ;
        }
        reversekro(root->next,k,temp);
        k--;
        if(k==0)
        {
            swap(root->val,temp->val);
        }
        temp=temp->next;
    }
    ListNode* swapNodes(ListNode* head, int k)
     {
         ListNode *temp=head;
         reversekro(head,k,temp);
         return head;
        
     }
};