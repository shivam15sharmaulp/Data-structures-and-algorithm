# Last updated: 08/05/2026, 09:34:12
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        x=0
        y=0
        valx=0
        valy=0
        a=l1
        b=l2
        i=0
        newlist=ListNode()
        while a!=None or b!=None:
            if a is not None:
                x=10**i
                valx= (a.val)*x+valx
                a=a.next
            if b is not None:
                y=10**i
                valy=(b.val)*y+valy
                b=b.next
            i+=1
        print(valx, valy)
        ans= int(valx+valy)
        string=str(ans)
        lisstring=list(string)
        lisstring= list(reversed(lisstring))
        start= newlist
        for i, x in enumerate(lisstring):
            start.val=int(x)
            if i!=len(lisstring)-1:
                start.next= ListNode()
                start= start.next

        return newlist