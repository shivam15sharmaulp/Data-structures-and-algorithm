# Last updated: 08/05/2026, 09:28:11
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        
        Answer = [False] * len(candies)
        for i in range(len(candies)):
            if (max(candies) <= candies[i]+ extraCandies) :
                Answer[i]= True
            else:
                Answer[i] = False

        return Answer
