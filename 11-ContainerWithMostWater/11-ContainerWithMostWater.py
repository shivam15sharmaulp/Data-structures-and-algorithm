# Last updated: 08/05/2026, 09:34:05
class Solution:
    def maxArea(self, height: List[int]) -> int:
        

        left=0
        right=len(height)-1
        prod=0
    
        while left<right:

            value= min(height[left], height[right])*(right-left)

            if value>prod:
                prod= value

            if height[left]<height[right]:
                left+=1
            else:
                right-=1

        return prod