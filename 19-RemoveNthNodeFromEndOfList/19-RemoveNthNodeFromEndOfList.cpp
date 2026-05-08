// Last updated: 08/05/2026, 09:33:51
#include <iostream>
#include <vector>
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
        std::vector<ListNode*> stack;
        ListNode dummy(0,head);
        ListNode *curr=&dummy;
        while(curr){
            stack.push_back(curr);
            curr= curr->next;
        }
        int l= stack.size()-1;
        ListNode* start= stack[l-n];
        ListNode* tmp= start->next;
        start->next= tmp->next;
        tmp->next= nullptr;

        return dummy.next;
        
    }
};