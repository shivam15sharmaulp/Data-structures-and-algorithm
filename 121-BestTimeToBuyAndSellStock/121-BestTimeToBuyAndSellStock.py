# Last updated: 08/05/2026, 09:32:04
class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        mini= float("inf")
        maxi= 0

        for x in prices:
            mini= min(mini,x)
            maxi= max(maxi,x-mini)

        return maxi
        