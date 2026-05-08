# Last updated: 08/05/2026, 09:33:37
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        left=0
        right=1

        for i in range(len(nums)):
            if nums[i]!=val:
                nums[left]= nums[i]
                left+=1
        return left