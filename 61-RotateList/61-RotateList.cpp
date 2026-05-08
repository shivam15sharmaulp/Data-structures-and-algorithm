// Last updated: 08/05/2026, 09:33:02
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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode dummy= ListNode(0, head);
        ListNode *slow= &dummy;
        ListNode *fast= head;
        int i=1;
        int l=0;
        
        while(fast){
            fast=fast->next;
            l+=1;
        }
        if (l==0){
            return head;
        }
        
        if(k>l){
        k= k%l;}
        if(k==0 || k==l || head==nullptr || l==1){
            return head;
        }
        
        // std::cout<<"k value="<<k<<std::endl;
        fast= head;
        while(fast){
            if(i<k){
                fast= fast->next;
                i+=1;
            }
            else if(i==k){
                if (fast->next==nullptr){
                    break;
                }
                fast= fast->next;
                slow= slow->next;
            }
        }

        ListNode *newhead= slow->next;
        slow->next= nullptr;
        // std::cout<<""
        // if(fast==nullptr){
        //     std::cout<<" It is null"<<std::endl;
        // }
        fast->next=head;


        return newhead;

        
    }
};