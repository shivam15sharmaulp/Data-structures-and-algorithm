# Last updated: 08/05/2026, 09:29:11
class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        
        for i in range(len(flowerbed)):
            if i == 0 and len(flowerbed)==1:
                if flowerbed[i] == 0:
                    n-=1
            
            elif i == 0 and len(flowerbed)>1:
                if flowerbed[i] == 0 and flowerbed[i+1] ==0:
                    n-=1
                    flowerbed[i]=1
            elif i == len(flowerbed)-1 and len(flowerbed)>1:
                if flowerbed[i] == 0 and flowerbed[i-1] ==0:
                    n-=1
                    flowerbed[i]=1
            else:
                if flowerbed[i]==flowerbed[i+1]==flowerbed[i-1]==0:
                    n-=1
                    flowerbed[i]=1
            if n==0 or n<0:
                return True
        return False
