# Last updated: 08/05/2026, 09:27:39
class Solution:
    def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
        pair = [(n1,n2) for n1, n2 in zip(nums1,nums2)]

        pair= sorted(pair, key=lambda p: p[1], reverse= True)
        heap=[]
        add=0
        res=0
        
        for n1,n2 in pair:
            heapq.heappush(heap,n1)
            add+=n1

            if len(heap)>k:
                x= heapq.heappop(heap)
                add-=x

            if len(heap)==k:
                
                res= max(res, add*n2)

        return res