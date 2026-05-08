# Last updated: 08/05/2026, 09:28:22
class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        # a=[]
        # b=[]

        sa=set(nums1)
        sb=set(nums2)

        return [sa.difference(sb), sb.difference(sa)]