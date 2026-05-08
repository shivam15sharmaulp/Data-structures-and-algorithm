# Last updated: 08/05/2026, 09:29:01
class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        for i, x in enumerate(nums):
            if i!=0:
                nums[i]+=nums[i-1]
        left=0
        print(nums)
        for i, x in enumerate(nums):
            if i!=0:
                left=nums[i-1]
            right = nums[-1]-nums[i]
            print(left, right)
            if left == right:
                return i
        return -1