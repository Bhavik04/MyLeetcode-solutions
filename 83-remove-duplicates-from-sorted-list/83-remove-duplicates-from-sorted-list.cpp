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
        //int data=101;
        for(;curr!=NULL;curr=curr->next){
            if(curr->val==prev->val){
                prev->next=curr->next;
            }
            else prev=curr;
        }
        
        return head;
    }
};