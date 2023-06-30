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

   void check(ListNode*root1,ListNode * root2,int &carry)
   {
       if(!root1 && !root2 )
       {
           
           return ;
       }
       else if(!root2)
       {
         while(carry)
         {
             if(!root1)
             {
                break;
             }
             root1->val+=1;
             if(root1->val>9)
             {
                 root1->val%=10;
                 if(!root1->next)
                 {
                     
                  ListNode * temp = new ListNode(1);
                  root1->next=temp;
                  temp->next =nullptr;
                  break;
                 }
                 root1=root1->next;

             }
             else
             {
                 carry =0;
                 break;
                 
             }

         }

           return ;
       }
       root1->val+=root2->val;
       if(carry)
       {
           root1->val+=1;
           carry=0;
       }
       if(root1->val>9)
       {
           carry=1;
           root1->val%=10;
       }
       check(root1->next,root2->next,carry);
       if(!root1->next)
       {
           if(carry)
           {
              ListNode * temp = new ListNode(1);
              root1->next=temp;
              temp->next =nullptr;
           }
           return;
       }
   }
    ListNode* addTwoNumbers(ListNode* root1, ListNode* root2) 
    {
        int carry =0;
        int counter=0,c=0;
        ListNode *one= root1;
        ListNode*two = root2;

        while(one)
        {
            one=one->next;
            counter++;
        }
        while(two)
        {
            two=two->next;
            c++;
        }
        if(c>counter)
        {
           check(root2,root1,carry);
             return root2;
        }
     
             check(root1,root2,carry);
        
       
        return root1;
    }
};