# Last updated: 08/05/2026, 09:28:00
class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        nums.sort()
        left=0
        right=len(nums)-1

        ans=0

        while left<right:
            if nums[left]+nums[right]<k:
                left+=1
            elif nums[left]+nums[right]>k:
                right-=1
            else:
                left+=1
                right-=1
                ans+=1

        return ans