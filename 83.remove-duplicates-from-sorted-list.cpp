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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *a, *b;
        a = b = head;
        if(!head) return NULL;
        while(b = b->next){
            if(a->val != b->val){
                a->next = b;
                a = b;
            }
        }
        a->next = b;
        return head;
    }
};
