# Last updated: 08/05/2026, 09:32:03
class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        lastsold=0
        lastbuy= -prices[0]

        for i in range(1,len(prices)):
            currbuy= max(lastbuy, -prices[i]+lastsold)
            currsell= max(lastsold,prices[i]+lastbuy)

            lastbuy= currbuy
            lastsold= currsell
            

        return lastsold