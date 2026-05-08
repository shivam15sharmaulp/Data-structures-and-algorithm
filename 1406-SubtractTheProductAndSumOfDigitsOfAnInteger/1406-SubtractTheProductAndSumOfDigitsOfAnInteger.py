# Last updated: 08/05/2026, 09:28:19
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        b=1
        s=0
        num=n
        for i in range(len(str(n)),0,-1):
            a= int(num/(10**(i-1)))
            
            num= num-(a*(10**(i-1)))
            
            b=a*b
            s=s+a
        return b-s