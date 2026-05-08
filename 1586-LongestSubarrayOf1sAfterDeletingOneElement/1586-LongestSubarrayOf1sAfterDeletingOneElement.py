# Last updated: 08/05/2026, 09:28:05
class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        left=0
        right=0
        zeros=0
        length=0

        while right< len(nums):

            if nums[right]==1:
                right+=1
            elif nums[right]==0:
                if zeros:
                    if nums[left]==0:
                        zeros=0
                        left+=1
                    else:
                        left+=1
                else:
                    zeros+=1
                    right+=1

            if length<right-left-zeros:
                length=right-left-zeros

        if 0 not in nums:
            length-=1

        return length
                     