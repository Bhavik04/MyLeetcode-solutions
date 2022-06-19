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
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==NULL || head->next==NULL)return head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        ListNode* first=head;
        int data=101;
        for(;curr!=NULL;curr=curr->next){
            if(curr->val==prev->val){
                data=curr->val;
                //prev->next=curr->next;
                while(curr!=NULL && curr->val==data){
                    curr=curr->next;
                }
                if(prev==head)head=curr;
                else first->next=curr;
                
            }else if(first!=prev)first=prev;
            
            if(curr==NULL)break;
                
             prev=curr;
             
            
            
        }
        
        return head;
    }
};