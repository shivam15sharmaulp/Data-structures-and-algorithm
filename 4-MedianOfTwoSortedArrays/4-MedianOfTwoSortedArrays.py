# Last updated: 08/05/2026, 09:34:09
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        
        if len(nums1)> len(nums2):
            nums1, nums2= nums2, nums1
        total= len(nums1)+len(nums2)
        mid=total//2
        left= 0
        right= len(nums1)-1

        while True:

            i= (left+right)//2
            j= mid-i-2

            n1left=nums1[i] if i>=0 else float('-infinity')
            n1right=nums1[i+1] if i<len(nums1)-1 else float('infinity')
            n2left=nums2[j] if j>=0 else float('-infinity')
            n2right=nums2[j+1] if j<len(nums2)-1 else float('infinity')

            if n1left<=n2right and n2left<=n1right:
                if total % 2:
                    return min(n1right, n2right)
                return (max(n1left, n2left)+ min(n2right, n1right))/2
            else:
                if n1left> n2right:
                    right= i-1
                else:
                    left=i+1



        