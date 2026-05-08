# Last updated: 08/05/2026, 09:33:45
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    
    def merge_two_sorted_lists(self,l1,l2):
            dummy= ListNode(0)
            curr= dummy
            a1= l1
            a2= l2
            while ( a1 and a2):
                if a1.val<=a2.val:
                    curr.next=a1
                    a1=a1.next
                else:
                    curr.next= a2
                    a2=a2.next
                    

                curr= curr.next

            if(a1):
                curr.next=a1
            
            if(a2):
                curr.next=a2
                
            return dummy.next

    
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:

        if len(lists)==0:
            return None
        if len(lists)==1:
            return lists[0]

        mid= len(lists)//2

        lm = self.mergeKLists(lists[0:mid])
        rm= self.mergeKLists(lists[mid:])

        return self.merge_two_sorted_lists(lm,rm)
        

        