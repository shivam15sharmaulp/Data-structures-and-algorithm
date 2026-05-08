# Last updated: 08/05/2026, 09:30:13
class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:

        d= collections.deque()

        l=0
        r=0
        output=[]
        while r<len(nums):
            while d and nums[d[-1]]<nums[r]:
                d.pop()
            d.append(r)

            if l>d[0]:
                d.popleft()
            
            if r+1>=k:
                output.append(nums[d[0]])
                l+=1
            r+=1
        
        return output
            
        
        