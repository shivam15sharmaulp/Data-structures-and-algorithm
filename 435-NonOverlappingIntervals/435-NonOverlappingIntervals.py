# Last updated: 08/05/2026, 09:29:33
class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        

        intervals_sort= sorted(intervals, key=lambda x: x[1])

        print(intervals_sort)
        left= float("-inf")
        count=0
        for x in intervals_sort:
            if left<=x[0]:
                left=x[1]
                continue
            else:
                count+=1

        return count