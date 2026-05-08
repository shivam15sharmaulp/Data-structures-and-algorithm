# Last updated: 08/05/2026, 09:28:32
class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
    
        left=0
        right=0

        zeros=0
        length=0

        while right<len(nums):

            if nums[right]==1:
                right+=1
            elif (nums[right]==0):
                if zeros<k:
                    zeros+=1
                    right+=1
                else:
                    if nums[left]==0:
                        left+=1
                        zeros-=1
                    else:
                        left+=1

            if length< right-left:
                length= right-left
        
        return length
