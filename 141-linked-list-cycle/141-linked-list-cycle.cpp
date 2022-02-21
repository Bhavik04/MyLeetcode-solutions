/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        unordered_map <ListNode*,int> umap;
        ListNode *temp=head;
        for(temp=head;temp->next!=NULL;temp=temp->next){
            if(umap.count(temp)) return true;
            umap[temp]++;
        }
        return false;
    }
};