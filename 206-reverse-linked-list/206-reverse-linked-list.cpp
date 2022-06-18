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
    
    void reverse(ListNode* &head, ListNode* prev, ListNode* curr, ListNode* nxt){
        if(curr==NULL) {head=prev;return;}
        
        curr->next=prev;
        if(nxt)
            reverse(head,curr,nxt,nxt->next);
        else reverse(head,curr,nxt,nxt);
    }
    
    ListNode* reverseList(ListNode* head) {
            
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=head;
        ListNode* curr=prev->next;
        ListNode* nxt=curr->next;
        
        head->next=NULL;
        
        //my RECURSIVE approach
        reverse(head,prev,curr,nxt);
        return head;
        
        
        // my ITERATIVE approach
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt!=NULL)
                nxt=nxt->next;
        }
        head=prev;
        return head;
    }
};