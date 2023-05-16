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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *cur =head;
        ListNode * temp =head->next;
 
        while(temp  )
        {
            int x = cur->val;
            cur->val = temp->val;
            temp->val =x;

            if(temp->next==NULL)break;
            temp=temp->next;
            if(temp->next==NULL)break;
            temp=temp->next;
            cur=cur->next->next;
        }
        return head;
    }
};