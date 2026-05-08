# Last updated: 08/05/2026, 09:27:44
import heapq
class SmallestInfiniteSet:

    def __init__(self):
        self.heap=[]
        self.next_smallest=1
        self.arr=set()

    def popSmallest(self) -> int:
        if not self.heap:
            smallest = self.next_smallest
            self.next_smallest+=1
        else:
            smallest=heapq.heappop(self.heap)
            
            self.arr.remove(smallest)

        return smallest

    def addBack(self, num: int) -> None:


        if num not in self.arr and self.next_smallest>num:
            heapq.heappush(self.heap, num)
            self.arr.add(num)
        


# Your SmallestInfiniteSet object will be instantiated and called as such:
# obj = SmallestInfiniteSet()
# param_1 = obj.popSmallest()
# obj.addBack(num)