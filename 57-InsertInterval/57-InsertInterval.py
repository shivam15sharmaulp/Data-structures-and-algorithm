# Last updated: 08/05/2026, 09:33:06
class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        startcheck=1
        endcheck=1
        ans=[]
        start=float('-inf')
        end= float('inf')
        l=0
        a,b= newInterval

        if intervals==[]:
            return [newInterval]

        for x,y in intervals:
            l+=1
            if x<=a<=y and startcheck :
                start=x
                startcheck=0
            if a<=x and startcheck and endcheck==1:
                start=a
                startcheck=0
            if b<x and startcheck==0:
                end=b
                startcheck=1
                print(start,end)
                ans.append([start,end])
                ans.append([x,y])
                print(x,y)
                endcheck=0
                continue

            if x<=b<=y and startcheck==0:
                end= y
                
                ans.append([start,end])
                endcheck=0
                startcheck=1
                continue
                
            if b>=y and startcheck==0 and endcheck==1:
                end=b
                if len(intervals)==l:
                    ans.append([start,end])
                
                
            if (startcheck==1) :
                # print(x,y)
                ans.append([x,y])

        if start==float(-inf) or end==float(inf):
            if newInterval[0]<intervals[0][0]:
                intervals=[newInterval] +intervals
            else:
                intervals.append(newInterval)
            return intervals

        
        # if len(intervals)==1:

        #     return [[start,end]]

        return ans

        
            
