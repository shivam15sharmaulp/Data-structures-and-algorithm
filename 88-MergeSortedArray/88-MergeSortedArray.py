# Last updated: 08/05/2026, 09:32:33
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """

        left= m-1
        e= m+n-1
        i=n-1

        while i>=0 and left>=0:
            if nums1[left]<nums2[i]:
                nums1[e]= nums2[i]
                i-=1
            
            else:
                nums1[e]= nums1[left] 
                left-=1
            
            e-=1

        while i>=0:
            nums1[e]=nums2[i]
            e-=1
            i-=1

        