# Last updated: 08/05/2026, 09:33:12
class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        out = []
        for i in sorted(intervals, key=lambda i: i[0]):
            if out and i[0] <= out[-1][1]:
                out[-1][1] = max(out[-1][1], i[1])
            else:
                out += [i]
        return out
        
        
        

        
#         interval=[]
#         matched=[]
        
#         for n1,i in enumerate(intervals):
#             match=0
#             for n2,j in enumerate(intervals[n1+1:]):
                
#                 if i[1]>=j[0] and i[1]<=j[1] and i[0]>=j[0] and i[0]<=j[1]:
#                     matched.append(i)
#                 elif j[1]>=i[0] and j[1]<=i[1] and j[0]>=i[0] and j[0]<=i[1]:
#                     matched.append(j)
#                 elif i[0]==j[0] and i[1]==j[1]:
#                     pass
#                 elif i[1]>=j[0] and i[1]<=j[1]:
#                     add=[i[0],j[1]]
#                     interval.append(add)
#                     match=+1
#                     matched.append(i)
#                     matched.append(j)
#                 elif  i[0]<=j[1] and i[1]>=j[0]:
#                     add=[j[0],i[1]]
#                     interval.append(add)
#                     match=+1
#                     matched.append(i)
#                     matched.append(j)
            
#             if i not in matched and i not in interval:
#                 interval.append(i)
#         return interval