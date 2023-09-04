/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   int ans =0;
   int flag=1;
   void check(ListNode *slow,ListNode * fast)
   {
       
       if(ans==1)return;
       if(flag==1)return;
        if(!fast)
        { 
            flag=1;
            return;
        }
         if(slow==fast)
         {
             ans=1;
             return;
         }
       check(slow->next,fast->next->next);
       
   }
    bool hasCycle(ListNode *head) {
        if(!head or head->next==NULL)return 0;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast and fast->next)
        {
           slow=slow->next;
           fast=fast->next->next;
          // cout<<fast->val<<" "<<slow->val<<endl;
           if(slow==fast)return 1;
           
        }
        return 0;
    }
};