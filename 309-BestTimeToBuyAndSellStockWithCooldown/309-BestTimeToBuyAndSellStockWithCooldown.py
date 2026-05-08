# Last updated: 08/05/2026, 09:29:58
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        sell=0
        hold=float("-inf")
        cooldown=0

        for price in prices:
            prevsell=sell
            prevhold= hold
            prevcooldown= cooldown

            sell= prevhold + price
            hold= max(prevhold,prevcooldown-price)
            cooldown= max(prevcooldown, prevsell)

        return max(sell,cooldown)