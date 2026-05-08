# Last updated: 08/05/2026, 09:29:28
class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points_sorted= sorted(points, key= lambda x:x[1])
        count=0

        print(points_sorted)
        current= float("-inf")

        for x in points_sorted:
            if x[0]<=current:
               continue
               
            else:
                current=x[1]
                count+=1
                

        return count 
