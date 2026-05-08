# Last updated: 08/05/2026, 09:29:05
import statistics
class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        left= 0
        right=k
        k=float(k)
        avg=float(-inf)
        add=0
        p=statistics.mean(nums[left:right])
        while right<=len(nums):
            add=0
            if right!=k:
                p=(p*k-nums[left-1]+nums[right-1])/k
            if (p) > avg:
                avg=  p
                print(avg)
            left+=1
            right+=1
            
        return avg