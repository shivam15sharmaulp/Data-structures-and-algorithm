# Last updated: 08/05/2026, 09:31:08
class Solution:
    def rob(self, nums: List[int]) -> int:
        
        rob1=0

        rob2=0
        #[rob1,rob2,n, n+1, n+2]

        for x in nums:
            temp=max(rob1+x, rob2)
            rob1=rob2
            rob2=temp
            
        return temp