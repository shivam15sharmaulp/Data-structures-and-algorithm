// Last updated: 08/05/2026, 09:33:41
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
    ListNode* kth(ListNode* head, int k){
        while(head && k>0){
            head= head->next;
            k--;
        }
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* dummy= new ListNode(0,head);
        ListNode* groupprev=dummy;

        while(true){
            ListNode* kthnode= kth(groupprev,k);
            if(!kthnode){
                break;
            }
            ListNode* curr= groupprev->next;
            //Reverse the group
            ListNode* groupnext=kthnode->next;
            ListNode* tmp;
            int i=k;
            ListNode* groupnewstart=curr;
            while(curr && i>0){
                tmp=curr->next;
                curr->next= groupnext;
                groupnext= curr;
                
                curr=tmp;
                i--;
            }
            groupprev->next= kthnode;
            groupprev= groupnewstart;
        }
        return dummy->next;
    }
};