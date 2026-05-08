# Last updated: 08/05/2026, 09:31:34
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        dummy= ListNode(0, head)

        if head== None:
            return head


        curr= head.next
        prev = head

        while curr:
            if curr.val>=prev.val:
                prev, curr= curr, curr.next
                continue

            tmp= dummy
            while curr.val>tmp.next.val:
                tmp= tmp.next

            prev.next= curr.next
            curr.next= tmp.next
            tmp.next= curr
            curr= prev.next

        return dummy.next