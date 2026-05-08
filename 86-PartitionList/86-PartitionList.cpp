// Last updated: 08/05/2026, 09:32:31
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
    ListNode* partition(ListNode* head, int x) {

        ListNode dummy= ListNode(0,head);
        ListNode* lessk = &dummy;
        ListNode* morek= &dummy;
        ListNode* curr= head;
        ListNode* tmp;
        bool moreh=false;
        while(curr){
            if ((curr->val)>=x){
                morek= curr;
                curr=curr->next;
                moreh=true;               
            }
            else{
                if(moreh){
                tmp= curr->next;
                morek->next=tmp;
                curr->next= lessk->next;
                lessk->next=curr;
                lessk=curr;
                curr=tmp;}
                else{
                    lessk= curr;
                    curr=curr->next;
                }
            }

        }
        return dummy.next;
    }
};