# Last updated: 08/05/2026, 09:30:54
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node= head
        tmp= None
        tail=None
        while node!=None:
            tmp=node.next
            node.next=tail
            tail=node
            node=tmp
        
        return tail
        