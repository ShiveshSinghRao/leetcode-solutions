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
    void checkkro(ListNode * cur ,ListNode *&temp,int &sum)
    {
        if(cur==NULL)return;
        checkkro(cur->next,temp,sum);
        sum=max(sum,temp->val+cur->val);
        //cout<<sum<<endl;
        temp= temp->next;
    }
    int pairSum(ListNode* head) {
        ListNode *temp=head;
        ListNode *cur =head;
        int sum=0;
        checkkro(cur,temp,sum);
        return sum;
    }
};