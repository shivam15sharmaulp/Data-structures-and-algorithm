# Last updated: 08/05/2026, 09:31:43
"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        
        
        if head is None:
            return head
        curr=head
        newcurr= Node(head.val)

        

        while curr:
            dummy= curr.next
            curr.next=Node(curr.val)
            newcurr=curr.next
            newcurr.next=dummy
            curr= dummy

        curr= head
        while curr and curr.next:
            dummy=curr.random
            if dummy is None:
                curr.next.random= dummy
                curr=curr.next.next
            else:
                curr.next.random=dummy.next
                curr=curr.next.next

        curr=head
        newlinked= curr.next
        
        while curr and curr.next.next:
            dummy= curr.next.next
            newcurr=curr.next
            newcurr.next=dummy.next
            
            curr= dummy
            
        
        return newlinked