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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *end=NULL;
        ListNode*temp=NULL;
        int i=1;
        for(end=head;end->next!=NULL;end=end->next,i++){
            if(i==n){
                temp=head;
            }
            else if (i>n) temp=temp->next;
        }
        if(temp==NULL){
            head=head->next;
            return head;
        }
        end=temp->next;
        temp->next=end->next;
        return head;
    }
};