# Last updated: 08/05/2026, 09:28:39
class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        def merge(nums, s , e, m):
            L= nums[s:m]
            R= nums[m:e+1]

            i=0 # index for L
            j=0 # index for R
            k= s # index for nums

            while i<len(L) and j<len(R):
                if L[i]<= R[j]:
                    nums[k]= L[i]
                    i+=1
                    k+=1
                else:
                    nums[k]= R[j]
                    j+=1
                    k+=1

            while i<len(L):
                nums[k]= L[i]
                i+=1
                k+=1
            
            while j<len(R):
                nums[k]= R[j]
                j+=1
                k+=1



        def mergesort(nums, s,e):
            if e-s+1<=1:
                return nums

            m= s+((e-s+1)//2)

            mergesort(nums, s,m-1)
            mergesort(nums, m,e)

            merge(nums,s,e,m)

            return nums
        mergesort(nums, 0, len(nums)-1)
        return nums