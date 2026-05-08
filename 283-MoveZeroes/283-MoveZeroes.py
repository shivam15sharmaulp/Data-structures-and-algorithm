# Last updated: 08/05/2026, 09:30:06
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        slow=[]
        fast=0
        for i,x in enumerate(nums):
            if x==0:
                slow.append(i)
                continue
            else:
                if len(slow)>=1:        
                    nums[slow[0]+fast]=nums[i]
                    nums[i]=0
                    fast+=1

        