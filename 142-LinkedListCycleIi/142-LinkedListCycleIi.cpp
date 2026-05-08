// Last updated: 08/05/2026, 09:31:39
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
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            fast= fast->next->next;
                slow= slow->next;
            
            if(fast== slow){
                ListNode* star= head;

                while(star!=slow){
                    star= star->next;
                    slow=slow->next;
                }
                return star;
            }
        }
        return nullptr;
        
    }
};