// Last updated: 08/05/2026, 09:31:41
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<unordered_set>
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* dummy= new ListNode();
        ListNode* curr;
        curr=head;
        dummy->next= curr;
        unordered_set<ListNode*> sets{dummy};
        while(sets.find(curr)==sets.end() && curr){
            sets.insert(curr);
            if(curr)
            curr= curr->next;
        }

        if(curr==nullptr){
            return false;
        }
        return true;
    }
};