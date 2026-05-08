# Last updated: 08/05/2026, 09:31:09
class Solution:
    def reverseBits(self, n: int) -> int:
        result=0
        for i in range(32):
            result<<=1
            result |= n&1
            n>>=1
        return result
        