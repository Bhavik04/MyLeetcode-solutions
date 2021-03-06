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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *l3 = NULL;
        ListNode *temp=NULL;
        int a=0,b=0,car=0,sum=0;
         while(l1!=NULL||l2!=NULL||sum>0){
             if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            
            
            ListNode *newnode= new ListNode(sum%10);
            if(l3==NULL){
                l3=newnode;
                temp=l3;
             }
            else{
                temp->next=newnode;
                temp=newnode;
            }
             sum=sum/10;
        }
        return l3;
    }
};