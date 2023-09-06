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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int counter=0;
        ListNode * cur=head;
        while(cur)
        {
            cur=cur->next;
            counter++;
        }
        int t = counter/k;
        int b= counter%k;
        vector<ListNode*>v(k,nullptr);
        cur=head;
        if(t==0)
        {vector<ListNode*>v(k);
            int sum =k-counter;
             ListNode *dummy = new ListNode(NULL);
            ListNode *head2=dummy;
            int i=0;
            while(cur)
            {
                ListNode * temp = new ListNode(cur->val);
                cur=cur->next;
                v[i++]=temp;
            }
         
            return v;
        }
        int total =k;
        int i =0;
        while(k--)
        {
            int sum= t+(b>0?1:0);
                b--;
            
           
            ListNode *dummy = new ListNode(NULL);
            ListNode *head2=dummy;
            while(sum>0 and cur)
            {
                ListNode* temp = new ListNode(cur->val);
                cur=cur->next;
                dummy->next=temp;
                dummy=dummy->next;
                sum--;
            }
            v[i++]=head2->next;

        }
        return v;
    }
};