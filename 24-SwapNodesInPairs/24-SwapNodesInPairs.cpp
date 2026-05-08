// Last updated: 08/05/2026, 09:33:42
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy= new ListNode(0, head);
        ListNode* curr= dummy;
        ListNode* tmp;
        ListNode* tmp2;
        while(curr && curr->next && curr->next->next){
            tmp= curr->next;
            curr->next= tmp->next;
            tmp2= tmp->next->next;
            curr->next->next= tmp;
            tmp->next= tmp2;
            curr= tmp;
        }

        return dummy->next;
        
    }
};