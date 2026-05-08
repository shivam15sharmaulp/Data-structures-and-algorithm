# Last updated: 08/05/2026, 09:34:17
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for idx, val in enumerate(nums):
                if target - val in nums[idx + 1:]:
                    return [idx, nums[idx + 1:].index(target - val) + (idx + 1)]
        # for i in range(len(nums)):
        #     if target-nums[i] in nums[i+1::]:
                
            
            
            # for j in range(i+1,len(nums)):
            #     if(nums[i]+nums[j]==target):
            #         return [i,j]
        