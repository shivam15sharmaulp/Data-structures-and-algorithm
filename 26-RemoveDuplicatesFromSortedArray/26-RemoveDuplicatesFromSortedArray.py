# Last updated: 08/05/2026, 09:33:40
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:

        left=0 

        for i in range(1,len(nums)):
            if nums[left]!=nums[i]:
                left+=1
                nums[left]=nums[i]

            

        return left+1
        