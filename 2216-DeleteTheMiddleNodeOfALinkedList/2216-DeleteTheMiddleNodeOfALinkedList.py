# Last updated: 08/05/2026, 09:27:47
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        a=head
        i=0

        if not head.next:
            del head
            return None
        while a.next:
            i+=1
            a= a.next
        print(i)

        mid= int((i+1)/2)
        print(mid)
        b=head
        for j in range(i):
            
            if j==mid-1:
                c=b.next
                d=c.next
                c.next= ""
                b.next=d
                return head
            b= b.next

        return head