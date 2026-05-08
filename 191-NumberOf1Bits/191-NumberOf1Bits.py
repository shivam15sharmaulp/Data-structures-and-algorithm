# Last updated: 08/05/2026, 09:31:06
class Solution:
    def hammingWeight(self, n: int) -> int:
        
        count=0

        while n:
            count+=n&1
            n>>=1
        return count