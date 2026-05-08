# Last updated: 08/05/2026, 09:32:30
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy=ListNode(0,head)
        leftprev=dummy
        curr=head
        for i in range(left-1):
            leftprev=curr
            curr=curr.next

        tmp=None
        l=curr
        for i in range(right-left+1):
            p=curr.next
            curr.next=tmp
            tmp=curr
            curr=p


            leftprev.next=tmp

            l.next=curr


        return dummy.next


