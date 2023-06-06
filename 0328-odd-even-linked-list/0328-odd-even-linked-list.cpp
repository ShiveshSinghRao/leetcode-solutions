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
    ListNode* oddEvenList(ListNode* head) {
        ListNode * last=head;
        int counter=0;
        if(!head)return NULL;
        if(head->next==NULL)return head;
        while(last->next!=nullptr)
        {
            last=last->next;
            counter++;
        }
        if(!head->next->next)
        {
        return head;
        }
        ListNode * prev= head;
        ListNode * cur=head->next;
        while(counter>0)
        {
            counter-=2;
            prev->next=cur->next;
            prev=prev->next;
            last->next=cur;
            last=last->next;
            cur->next=NULL;
            if(prev==NULL)break;
            cur = prev->next;
        }
        return head;

    }
};