# Last updated: 08/05/2026, 09:29:02
class Solution:
    def maxProfit(self, prices: List[int], fee: int) -> int:
        N = len(prices)

        if not prices :
            return 0

        dp=[[0,0] for i in range(len(prices))]


        dp[0][0]=0
        dp[0][1]=-prices[0]

        for i in range(1, len(prices)):


            dp[i][0]=max(dp[i-1][0], dp[i-1][1]-fee + prices[i])


            dp[i][1]=max(dp[i-1][1], dp[i-1][0]- prices[i])


        return dp[N-1][0]