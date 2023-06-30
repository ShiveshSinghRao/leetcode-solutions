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
public: ListNode *start;
    void callout(ListNode * root,ListNode * prev)
    {
        if(!root)
        {
            start =prev;
            return ;
        }
        
        callout(root->next,root);
        root->next=prev;

    }
    ListNode* reverseList(ListNode* head) {
    ListNode* prev=NULL;
     callout(head,prev);
     return start;
    }
};