# Last updated: 08/05/2026, 09:28:45
class Node:
    def __init__(self):
        self.val=None
        self.prev=None
        self.next= None 

class MyLinkedList:

    def __init__(self):
        self.head= Node()
        self.size=0
        

    def get(self, index: int) -> int:
        if index>=self.size:
            return -1
        curr= self.head
        for i in range(index):
            curr= curr.next
        return curr.next.val

    def addAtHead(self, val: int) -> None:
        curr= Node()
        curr.val= val
        curr.next= self.head.next
        self.head.next= curr
        self.size+=1

    def addAtTail(self, val: int) -> None:
        curr= self.head
        for i in range(self.size):
            curr= curr.next
        tail= Node()
        tail.val= val
        curr.next= tail
        self.size+=1

    def addAtIndex(self, index: int, val: int) -> None:
        if index> self.size:
            return None
        curr= self.head
        for i in range(index):
            curr= curr.next
        new= Node()
        new.val= val
        if index==self.size:
            curr.next=new
        else:
            tmp= curr.next
            curr.next= new
            new.next= tmp
        self.size+=1

    def deleteAtIndex(self, index: int) -> None:
        if index>=self.size:
            return None
        curr= self.head
        for i in range(index):
            curr= curr.next

        tmp= curr.next.next
        del curr.next
        self.size-=1
        curr.next= tmp


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)