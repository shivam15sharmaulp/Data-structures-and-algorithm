// Last updated: 08/05/2026, 09:31:33
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

    ListNode* findmid(ListNode* head){
        ListNode* slow= head;
        ListNode* fast= head->next->next;
        while(fast && fast->next){
            slow=slow->next;
            fast= fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right){
        ListNode* dummy= new ListNode();
        ListNode* tail= dummy;

        while(left && right){
            if(left->val>=right->val){
                tail->next=right;
                right= right->next;
            }
            else if(left->val<right->val){
                tail->next=left;
                left= left->next;
            }
            tail= tail->next;
}
        if(left){
            tail->next= left;
        }
        if(right){
            tail->next= right;
        }
        return dummy->next;
        
    }

    ListNode* sortList(ListNode* head) {
            if(!head || !head->next){
                return head;
            }
            ListNode* left= head;
            ListNode* right=  findmid(head);
            ListNode* tmp= right->next;
            right->next=NULL;
            right= tmp;

            left=this->sortList(left);
            right= this->sortList(right);
            return merge(left, right);
    }
};