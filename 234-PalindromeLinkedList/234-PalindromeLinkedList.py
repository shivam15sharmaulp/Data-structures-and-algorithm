# Last updated: 08/05/2026, 09:30:18
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        self.curr=head

        return self.solve(head)


    def solve(self, head):
        if not head:
            return True

        ans= self.solve(head.next) and head.val==self.curr.val

        self.curr= self.curr.next

        return ans

        