# Last updated: 08/05/2026, 09:31:18
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        d = {}
        for i in nums:
            d[i] = d.get(i, 0) + 1
            if d[i] > n // 2:
                return i
        
        # This line should never be reached if a majority element always exists
        return max(d, key=d.get)
        
            
        