# Last updated: 08/05/2026, 09:30:58
class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        i=0
        while left!=right:
            i+=1
            left>>=1
            right>>=1
        

        return left<<i