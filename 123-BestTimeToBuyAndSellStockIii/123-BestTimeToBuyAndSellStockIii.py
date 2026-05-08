# Last updated: 08/05/2026, 09:32:02
class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        buy1=-prices[0]
        sell1=0
        if len(prices)>1:
            buy2=-prices[1]
        else:
            return 0
        sell2=0
        
        for i in range(1, len(prices)):

            buy1=max(buy1, -prices[i])
            sell1= max(sell1,prices[i]+buy1)

            buy2= max(buy2,-prices[i]+sell1 )
            sell2= max(sell2, prices[i]+buy2)

        return sell2 