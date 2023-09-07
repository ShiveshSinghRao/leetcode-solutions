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
public:ListNode *temp;
       //int counter=0;
    void check(int ind,ListNode* root, int left, int right,int &counter)
    {
       if(!root)
           return;
       
       if(ind==left)temp=root;
       check(ind+1,root->next,left,right,counter);
       if(ind>= left and ind<=right and counter>0 )
       {
           swap(temp->val,root->val);
           cout<<temp->val<<" "<<root->val<<endl;
           temp=temp->next;
           counter--;
       }
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*cur=head;
      int   counter=(right-left+1)/2;
       
      cout<<counter<<endl;
        check(1,cur,left,right,counter);
        return head;
    }
};