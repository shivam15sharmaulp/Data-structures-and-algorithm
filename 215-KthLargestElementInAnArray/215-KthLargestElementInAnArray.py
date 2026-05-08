# Last updated: 08/05/2026, 09:30:38
import heapq
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        
        heap= [-x for x in nums]
        heapq.heapify(heap)
        for i in range(k):
            ans= heapq.heappop(heap)

        return -ans
