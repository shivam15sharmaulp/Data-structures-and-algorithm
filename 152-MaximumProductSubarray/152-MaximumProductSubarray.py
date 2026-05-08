# Last updated: 08/05/2026, 09:31:24
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res=max(nums)

        currMax=1
        currMin=1

        for n in nums:
            if n==0:
                currMax=1
                currMin=1

            tmp=currMax*n
            currMax= max(currMin*n,n,currMax*n)
            currMin= min(tmp, n*currMin,n)

            res=max(currMax, res)

        return res
                