// Last updated: 08/05/2026, 09:32:34
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* first = &dummy;
        ListNode* second = head;

        int tmp=-101;
        // bool cont= False
        int count=0;
        while(second){
            int val= second->val;
                if (count==0){
                    count+=1;
                    tmp= val;
                    second=second->next;
                }
               else if (count==1 && val!=tmp){
                    first=first->next;
                    second=second->next;
                    tmp = val;

                }
               else if (count>1 && val!=tmp){
                    first->next=second;
                    second=second->next;
                    count=1; 
                    tmp= val;
                }
               else if (tmp==val){
                    // cont= true;
                    second=second->next;
                    if (second==nullptr){
                        first->next= nullptr;
                        break;
                    }
                    count+=1;
                }
        }
        return dummy.next;
    }
};