# Last updated: 08/05/2026, 09:31:12
class Solution:
    def maxProfit(self, k: int, prices: List[int]) -> int:

        if k==0:
            return 0

        dp=[[-1000,0] for _ in range(k+1)]

        for price in prices:

            for i in range(1, 1+k):

                dp[i][0]=max(dp[i][0], -price+ dp[i-1][1])

                dp[i][1]= max(dp[i][1], price+dp[i][0])

        return dp[k][1] 
        
        