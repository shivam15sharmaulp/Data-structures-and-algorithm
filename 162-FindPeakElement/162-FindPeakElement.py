# Last updated: 08/05/2026, 09:31:26
class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        left=0
        right=len(nums)-1

        while(left<=right):

            mid= (left+right)//2

            if mid>0 and nums[mid]<nums[mid-1]:
                right= mid-1

            elif mid<len(nums)-1 and nums[mid+1]>nums[mid]:
                left= mid+1
            else:
                return mid