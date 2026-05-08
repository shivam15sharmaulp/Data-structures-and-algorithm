# Last updated: 08/05/2026, 09:30:04
import bisect
class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        
        lis=[]

        for num in nums:

            pos=bisect.bisect_left(lis,num)

            if pos==len(lis):
                lis.append(num)
            else:
                lis[pos]=num

        return len(lis)