# Last updated: 08/05/2026, 09:27:45
import math
class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        
        
        potions.sort()
        print(potions)
        ans=[]
        for x in spells:
            coe= success/x
            coe=math.ceil(coe)
            l=0
            r= len(potions)-1
            while(l<=r):
                mid=(l+r)//2
                if potions[mid] < coe:
                    l=mid+1
                else:
                    r=mid-1
            
            ans.append(len(potions)-l)

        return ans
