# Last updated: 08/05/2026, 09:28:42
import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l=1
        r=max(piles)
        res=1
        while(l<r):
            mid=(l+r)//2
            hours=0
            for x in piles:
                hours += math.ceil(x/mid)
            print(hours, mid)
            if hours<=h:
                res=mid
                r= mid
            elif hours>h:
                l=mid+1
            print("\n",l,r)
        return l