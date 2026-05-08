# Last updated: 08/05/2026, 09:28:18
class Solution:
    def minFlips(self, a: int, b: int, c: int) -> int:
        
        temp=(a|b)^c

        ans= bin(temp).count('1')+ bin((a&b)&temp).count('1')
        return ans