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
    ListNode* reverseList(ListNode* head) {
        // ITERATIVE approach
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=head;
        ListNode* curr=prev->next;
        ListNode* nxt=curr->next;
        //cout<<head->next->val;
        head->next=NULL;
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